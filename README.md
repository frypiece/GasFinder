Git Update Policies:
---------------
1. We only pull and push packages’ content under /src directory of each team member’s workstation folder in VM. 
   We will pull/push them from/to /Project_Packages at root directory under our project’s git page. 
   We should make sure our package folders under /src in our local machine are always synchronized with the remote git page's.

2. Never change or push CmakeLists.txt under your workstation/src to git.

3. All the other document or files that are not directly related to our project like README.md , Project DesignDocument, etc. will be pulled/pushed at root directory under our project’s git page.

4. Every time a team member modifies the content for any packages, he should make sure it can pass the catkin_make, and then add/commit/push them to our git page when he thinks the modification is big enough to generate a new commit version.

5. Always write down detailed message about what you have changed for each of your commit.

6. If there is a significant change on the whole architecture of our project, we may create a branch to develop it, and merge it when it is prooved to be better version than master's

Version Update Policies:
---------------------
1. All changes should be uploaded to the folder "Project_Packages" first.

2. The folder "Alpha_Release" will be our alpha release when we have an agreement. And after it is completed, it will not be changed anymore. 

3. So are the beta release and final release.

Authors:
---------------------
Kejia Li (jacob1230@email.arizona.edu)
Zheng Li (zhengli233@email.arizona.edu)
Harish Kumar Kothari, Abhishek (abhishek09@email.arizona.edu)