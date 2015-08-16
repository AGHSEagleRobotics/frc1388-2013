This page describes best practices for using the Issue Tracker.

The Issue Tracker can be used to keep track of different types of issues: bugs, tasks, feature requests, etc.  The system essentially functions the same for each type of issue, although there are minor differences in how it should be used for different types of issues.

| Table of Contents:  |
|:--------------------|

# Required fields #

The following fields should always be filled in.  They may be changed any time, as appropriate.

| **Summary** |one-line summary of the issue|
|:------------|:----------------------------|
| **Description** |multi-line description - should include all info needed by the person the issue is assigned to|
| **Owner**   |the person the issue is assigned to|
| **Status**  |general indicator of whether the issue is being worked on, done, etc.|

# Labels #

Labels are additional fields that describe the issue.  Labels are predefined, and describe specific aspects of the issue.  You can select appropriate labels by clicking in the labels field and selecting from the options provided.

The following labels should almost always be used:

| **Type-`*`** |Indicates whether it's a task, bug, etc|
|:-------------|:--------------------------------------|
| **Priority-`*`** |Indicates the relative priority of this issue|

# Lifecycle of an Issue #

The **Status** field of an issue is used to track the lifecycle of the issue.  An issue may go through states such as: New -> Accepted -> Started -> Fixed -> Done.  Consider the following example of a bug report:

| **Action** | **Updated by** | **Status** |
|:-----------|:---------------|:-----------|
| A new bug is entered; all required fields are filled in, and Status is set to "New" | Creator        | New        |
| The Owner acknowledges that he/she has received the issue report, and will work on it. | Owner          | Accepted   |
| The Owner has started work on the issue. | Owner          | Started    |
| The bug has been fixed _**and the fix has been tested**_. | Owner          | Fixed      |
| The creator acknowledges that the bug has been fixed. | Creator        | Done       |

# Priority #

The **Priority** field may be used as the team (subteam lead) sees fit.  Most issues should be considered as normal priority.

# Comments #

Comments may be added to an issue at any time.  This is an important aspect of documenting the issue.  Remember, the issue tracker is not only a way of making sure issues get resolved, but also a way of documenting those issues for future reference.