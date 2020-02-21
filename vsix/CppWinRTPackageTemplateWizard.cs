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
                wizardImpl?.ProjectFinishedGenerating(project);
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
            }
        }

        public void ProjectItemFinishedGenerating(DTEProjectItem projectItem)
        {
            try
            {
                wizardImpl?.ProjectItemFinishedGenerating(projectItem);
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
            VisualStudio.Shell.ThreadHelper.ThrowIfNotOnUIThread();

            bool addNuGetReference;
            try
            {
                DTEProject automationProject = (DTEProject)automationObject;
                Project project = new Project(automationProject.FullName);
                if (project.GetPropertyValue("CppWinRTDisableAutoNuGetReference").Equals("true", StringComparison.OrdinalIgnoreCase))
                {
                    addNuGetReference = false;
                }
                else
                {
                    addNuGetReference = true;
                }
            }
            catch (Exception ex)
            {
                ShowExceptionDialog(ex);
                addNuGetReference = true; // technically not reached
            }

            if (addNuGetReference)
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
