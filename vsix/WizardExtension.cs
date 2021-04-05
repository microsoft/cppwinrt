using EnvDTE;
using Microsoft.VisualStudio.ComponentModelHost;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;
using Microsoft.VisualStudio.TemplateWizard;
using NuGet.VisualStudio;
using System.Collections.Generic;
using System.ComponentModel.Composition;
using System.ComponentModel.Composition.Hosting;

namespace Microsoft.Windows.CppWinRT
{
    internal sealed class WizardExtension : IWizard
    {
        [Import]
        internal IVsTemplateWizard Wizard { get; set; }

        private void Initialize(object automationObject)
        {
            ThreadHelper.ThrowIfNotOnUIThread();
            using (var serviceProvider = new ServiceProvider((IServiceProvider)automationObject))
            {
                var componentModel = (IComponentModel)serviceProvider.GetService(typeof(SComponentModel));
                Assumes.Present(componentModel);
                using (var container = new CompositionContainer(componentModel.DefaultExportProvider))
                {
                    container.ComposeParts(this);
                }
            }
        }

        void IWizard.BeforeOpeningFile(ProjectItem projectItem)
        {
            Wizard.BeforeOpeningFile(projectItem);
        }

        void IWizard.ProjectFinishedGenerating(Project project)
        {
            Wizard.ProjectFinishedGenerating(project);
        }

        void IWizard.ProjectItemFinishedGenerating(ProjectItem projectItem)
        {
            Wizard.ProjectItemFinishedGenerating(projectItem);
        }

        void IWizard.RunFinished()
        {
            Wizard.RunFinished();
        }

        void IWizard.RunStarted(object automationObject, Dictionary<string, string> replacementsDictionary, WizardRunKind runKind, object[] customParams)
        {
            ThreadHelper.ThrowIfNotOnUIThread();
            Initialize(automationObject);

            if (replacementsDictionary.TryGetValue("$rootnamespace$", out var rootNamespace))
            {
                replacementsDictionary.Add("$cpprootnamespace$", rootNamespace.Replace(".", "::"));
            }

            Wizard.RunStarted(automationObject, replacementsDictionary, runKind, customParams);
        }

        bool IWizard.ShouldAddProjectItem(string filePath)
        {
            return Wizard.ShouldAddProjectItem(filePath);
        }
    }
}
