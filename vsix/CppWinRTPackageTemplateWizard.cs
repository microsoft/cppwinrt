using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using EnvDTE;
using Microsoft.VisualStudio.TemplateWizard;

namespace Microsoft.Windows.CppWinRT
{
    internal sealed class CppWinRTPackageTemplateWizard : IWizard
    {
        public void BeforeOpeningFile(ProjectItem projectItem)
        {
            // Not needed.
        }

        public void ProjectFinishedGenerating(Project project)
        {
            // Not needed.
        }

        public void ProjectItemFinishedGenerating(ProjectItem projectItem)
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

            Project project = (Project)automationObject;
            throw new NotImplementedException();
        }

        public bool ShouldAddProjectItem(string filePath)
        {
            // Not needed.
            return true;
        }
    }
}
