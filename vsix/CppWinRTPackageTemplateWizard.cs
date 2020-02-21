using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using Microsoft.Build.Evaluation;
using Microsoft.VisualStudio.TemplateWizard;

using DTEProject = EnvDTE.Project;
using DTEProjectItem = EnvDTE.ProjectItem;

namespace Microsoft.Windows.CppWinRT
{
    internal sealed class CppWinRTPackageTemplateWizard : IWizard
    {
        public void BeforeOpeningFile(DTEProjectItem projectItem)
        {
            // Not needed.
        }

        public void ProjectFinishedGenerating(DTEProject project)
        {
            // Not needed.
        }

        public void ProjectItemFinishedGenerating(DTEProjectItem projectItem)
        {
            // Not needed.
        }

        public void RunFinished()
        {
            // Not needed.
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
            catch
            {
                // If the property could not be read, use the default value, which is to add the reference.
                addNuGetReference = true;
            }

            if (addNuGetReference)
            {
                try
                {
                    Assembly asm = Assembly.Load("NuGet.VisualStudio.Interop, Version=1.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a");
                    Type wizardType = asm.GetType("NuGet.VisualStudio.TemplateWizard");

                    IWizard nugetWizard = (IWizard)Activator.CreateInstance(wizardType);
                    nugetWizard.RunStarted(automationObject, replacementsDictionary, runKind, customParams);
                }
                catch (Exception ex)
                {
#if DEBUG
                    string path = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments), "exception.txt");
                    using (Stream stream = File.Open(path, FileMode.Create))
                    using (StreamWriter writer = new StreamWriter(stream))
                    {
                        writer.WriteLine($"Caught exception: {ex.GetType().FullName}");
                        writer.WriteLine(ex.Message);
                        writer.WriteLine();
                        writer.WriteLine(ex.StackTrace);
                    }
#endif

                    throw new WizardCancelledException();
                }
            }
        }

        public bool ShouldAddProjectItem(string filePath)
        {
            // Not needed.
            return true;
        }
    }
}
