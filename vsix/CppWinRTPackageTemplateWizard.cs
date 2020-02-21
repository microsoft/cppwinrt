using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using Microsoft.Build.Evaluation;
using Microsoft.VisualStudio.TemplateWizard;
using System.Windows.Forms;

using DTEProject = EnvDTE.Project;
using DTEProjectItem = EnvDTE.ProjectItem;

namespace Microsoft.Windows.CppWinRT
{
    internal sealed class CppWinRTPackageTemplateWizard : IWizard
    {
        private IWizard wizardImpl = null;

        private void ShowExceptionDialog(Exception ex)
        {
            string text = $"{ex.GetType().FullName}: {ex.Message}\r\n\r\n{ex.StackTrace}";
            MessageBox.Show(text, "Caught Exception", MessageBoxButtons.OK, MessageBoxIcon.Error);
            throw new WizardBackoutException();
        }

        public void BeforeOpeningFile(DTEProjectItem projectItem)
        {
            try
            {
                wizardImpl?.BeforeOpeningFile(projectItem);
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public void ProjectFinishedGenerating(DTEProject project)
        {
            try
            {
                VisualStudio.Shell.ThreadHelper.ThrowIfNotOnUIThread();

                Project msbuildProject = new Project(project.FullName);
                if (msbuildProject.GetPropertyValue("CppWinRTDisableAutoNuGetReference").Equals("true", StringComparison.OrdinalIgnoreCase))
                {
                    // Don't forward this call to the NuGet wizard, as it has been explicitly disabled.
                }
                else
                {
                    wizardImpl?.ProjectFinishedGenerating(project);
                }

                ProjectCollection.GlobalProjectCollection.UnloadProject(msbuildProject);
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public void ProjectItemFinishedGenerating(DTEProjectItem projectItem)
        {
            VisualStudio.Shell.ThreadHelper.ThrowIfNotOnUIThread();

            try
            {
                Project msbuildProject = new Project(projectItem.ContainingProject.FullName);
                if (msbuildProject.GetPropertyValue("CppWinRTDisableAutoNuGetReference").Equals("true", StringComparison.OrdinalIgnoreCase))
                {
                    // Don't forward this call to the NuGet wizard, as it has been explicitly disabled.
                    // NuGet packages are also installed in ProjectItemFinishedGenerating().
                }
                else
                {
                    wizardImpl?.ProjectItemFinishedGenerating(projectItem);
                }

                ProjectCollection.GlobalProjectCollection.UnloadProject(msbuildProject);
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public void RunFinished()
        {
            try
            {
                wizardImpl?.RunFinished();
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public void RunStarted(object automationObject, Dictionary<string, string> replacementsDictionary, WizardRunKind runKind, object[] customParams)
        {
            try
            {
                Assembly asm = Assembly.Load("NuGet.VisualStudio.Interop, Version=1.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a");
                Type wizardType = asm.GetType("NuGet.VisualStudio.TemplateWizard");

                wizardImpl = (IWizard)Activator.CreateInstance(wizardType);
                wizardImpl.RunStarted(automationObject, replacementsDictionary, runKind, customParams);
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public bool ShouldAddProjectItem(string filePath)
        {
            try
            {
                if (wizardImpl != null) return wizardImpl.ShouldAddProjectItem(filePath);
                else return true;
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
                return true; // technically not reached
            }
        }
    }
}
