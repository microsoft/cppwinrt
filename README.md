# cppwinrt
C++/WinRT is a standard C++ language projection for the Windows Runtime implemented solely in header files. It allows you to both author and consume Windows Runtime APIs using any standards-compliant C++ compiler. C++/WinRT is designed to provide C++ developers with first-class access to the modern Windows API.

**Note:** This is a RTM release. This release contains the C++ header files that comprise the library for the WinRT APIs documented in Windows 10 Anniversary Update SDK. This includes all Universal WinRT APIs plus all WinRT APIs documented in the various Extension SDKs that also ship in the Anniversary Update SDK.

**Note:** This RTM release fully supports consuming Windows Runtime APIs. While you can use the current functionality to define a class that implements one or more existing WinRT interfaces (as shown by samples defining FrameworkView classes), the current release does not provide any infrastructure for implementing a module (DLL or EXE) that hosts activatable WinRT components. Future releases will provide this support.

# Documentation
* [Getting Started](Getting%20Started.md)
* [Breaking Changes](Breaking%20Changes.md)

# Reporting bugs & issues
Issues and feature requests are submitted through the project's Issues section on GitHub. Please use the following guidelines when you submit issues and feature requests:
* Make sure the issue is not already reported by searching through the list of issues 
* Provide detailed description of the issue including the following information: 
  * Which feature the issue appears in
  * Under what circumstances the issue appears
  * What is desired behavior?
  * What is breaking?
  * What is the impact? (things like loss or corruption of data, compromizing security, disruption of service etc.) 
  * Any code that will be helpful to reproduce the issue

Issues are regularly reviewed and updated with additional information by the core team. Sometimes the core team may have questions about particular issue that might need clarifications so, please be ready to provide additional information. 

# Feature requests

#### Feature requests and Design Change Requests (DCRs) are an important part of the lifecycle of any software project. Please log these as Issues in  our GitHub repository. 

When opening any feature requests, consider including as much information as possible, including: 
* Detailed scenarios enabled by the feature or DCR.
* Information about your use case or additional value your business or site will see from the feature. 
* Any design tips or estimation ideas you may have considered already.
* Any potential caveats or concerns you may have already thought about. 
* A miniature test plan or list of test scenarios is always helpful.

```
Note: A Contribution Legal Agreement (CLA) is required before the team can consider your contributions &
pull requests. Please read this entire page carefully. 
```

# Contributing code

#### From an engineering standpoint, please make sure that you can build and test the code. Familiarize yourself with our project guidelines and coding conventions. 
We recommend that you read these great posts about open source: 
* [Open Source Contribution Etiquette] (http://tirania.org/blog/archive/2010/Dec-31.html) by Miguel de Icaza 
* [Don't "Push" Your Pull Requests] (https://www.igvita.com/2011/12/19/dont-push-your-pull-requests) by Ilya Grigorik 
* [A Successful Git Branching Model] (http://nvie.com/posts/a-successful-git-branching-model/) by Vincent Driessen 

Before you start working on a feature or substantial code contribution please discuss it with the team and ensure it is an appropriate addition to the core product. 

Note that code submissions will be rigorously reviewed and tested by the Microsoft C++/WinRT Team, and only contributions that meet an extremely high bar for both quality and design/roadmap appropriateness will be merged into the source.

In some situations Microsoft employees may engage with you to review design decisions and mitigate issues as part of the contribution process. Understand that in some situations, developers inside Microsoft may decide to decline your pull request and instead log the issue for a future product milestone or bug fix. The team will provide information in the pull in these situations and still thank you for your contribution. 

For bug fixes, simply start a conversation in the related GitHub issue to notify the team and chat about the design of the fix if needed.

In order to speed up the process of accepting your contributions, you should try to make your checkins as small as possible, avoid any unnecessary deltas and the need to rebase.

# Contribution License Agreement (CLA)
#### In order to become a contributor to the Microsoft C++/WinRT project on GitHub you must follow some legal requirements.
Until you meet the legal requirements, your pull requests / source contributions will not be considered or reviewed.

### Community Member
As a community member you must sign the Contribution License Agreement (CLA) before you can contribute to Microsoft open source projects.

You only need complete and submit the documentation once. Please carefully review the document; you may also need to have your employer sign the document.

Signing the Contribution License Agreement (CLA) does not grant you rights to commit to the main repository but it does mean that the Microsoft C++/WinRT team will be able to review and consider your contributions and you will get credit if we do.

Please configure your Git client with a name and email address to use for your commits. This will also help the team validate your CLA status: 
```
git config user.name Your Name 
git config user.email YourAlias@YourEmailDomain 
```

# Step-by-step guide
## Checkout the latest code

In order to obtain the source code you need to become familiar with Git (see http://progit.org/book/) and Github (see http://help.github.com/) and you need to have Git installed on your local machine. You can obtain the source code from Github and start a contributor environment by following the these steps on your local machine:

* Go to https://github.com/Microsoft/cppwinrt (if you are reading this online, you are there already!)
* Select  and choose your own Github account as target 
* Clone the repository on your local machine with the following Git command: 
  * `git clone git@github.com:[USERNAME]/[PROJECT]`
* When you clone the repository you should see, at least, 2 branches: dev and master. dev is the branch where the team does all the day to day development while master is the branch that is always up to date with the latest release. This means, before starting any work, you should switch to the dev branch. You can do so with the following command:
  * `git checkout dev`

## Create bug fixes and features

You can then start to make modifications to the code in your local Git repository. This can be done in your local dev branch or, if you prefer, in a branch out of dev. In the simplest scenario, working directly on dev, you can commit your work with following commands:

* Add and commit your local changes
  * `git commit -a`
* Push your changes from your local repository to your github fork
  * `git push `

Once your code is in your github fork, you can then submit a pull request for the team's review. You can do so with the following commands:

* In GitHub click on the Pull Request button 
* In the pull request select your fork as source and Microsoft/cppwinrt as destination for the request 
* Write detailed message describing the changes in the pull request 
* Submit the pull request for consideration by the Core Team

If there are conflicts between your fork and the main project one, github will warn you that the pull request cannot be merged. If that's the case, you can do the following: 

* Add remote to your local repository using the following Git commands
  * `git remote add upstream -f git@github.com:Microsoft/cppwinrt`
* Update your local repository with the changes from the remote repository by using the following Git commands (make sure you're in the branch you're submitting the code from)
  * `git merge upstream/dev`
* Resolve any conflicts locally and finally do another push with the command
  * `git push `
  
Please keep in mind that not all requests will be approved. Requests are reviewed by the C++/WinRT Team on a regular basis and will be updated with the status at each review. If your request is accepted you will receive information about the next steps and when the request will be integrated in the main branch. If your request is rejected you will receive information about the reasons why it was rejected.

# Code Reviews
The Microsoft C++/WinRT team has an active Microsoft discussion group used for submitting code reviews and discussing design changes, best practices, and other important topics. 

Part of the code review process involves using a code review tool, and for most open source projects, the team uses the built-in Pull Request functionality on GitHub for enabling annotations and comments on code before accepting the pull request/s. 

Expect a good amount of feedback as part of any pull request: not only which branch to merge to and from, but also consistency guidelines, matching existing code, and making targeted, smart changes when fixing bugs. 

# Contact the team

The best way to get in touch with the team regarding feature ideas, developer designs and communicating about bug fixes is to use the Issues system built in to GitHub.

# Code of Conduct

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/). For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

# License

Copyright (c) Microsoft Corporation. All rights reserved.

Licensed under the [MIT](license.txt) License.