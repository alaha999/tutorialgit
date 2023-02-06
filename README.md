# tutorialgit
basic tutorial on git

We will learn some basic usage of git in this ultra short tutorial.
- Git is independent of Github.
- But today we will learn how to use git in collab with github to work with many people working on the same project.

**Resources:**
- https://hsf-training.github.io/analysis-essentials/git/README.html
- https://www.atlassian.com/git/tutorials/setting-up-a-repository
- https://www.w3schools.com/git/

## Workflow Summary
(non-fork version)

*For the first time*
```

>> 1 git clone <project url>
>> 2 git checkout -b <your branch>
>> 3 touch myfile.txt
>> 4 git status
>> 5 git add *
>> 6 git commit -m "added my file"
>> 7 git push origin <your branch>
>> 8 **Make a pull request and follow up**

```
*Next time, you should do,*
```
>> git pull origin main ( to pull the latest changes from main repo)
>> follow 3-8
```

### Procedure
<hr>

1. Open your github account and open the link https://github.com/alaha999/tutorialgit<br>
you should see the repo tutorial git. Our job is now to clone this folder in to our local computer to edit, add scripts etc.
```
>> mkdir myproject
>> cd myproject
>> git clone https://github.com/alaha999/tutorialgit.git
>> ls
```
you should see one readme.md file.

**SOME BASIC COMMAND**

If you are setting up git for the first time checkout these commands to set up.

```
>> which git
>> git config --list
>> git branch
```

2. We need to create our own branch to contribute in a project without affecting other's workflow.

```
>> git remote -v
>> git checkout -b "dev_arnab"
```

3. Make changes in the Readme file and also add some scripts of your taste.
```
>> touch myfile.txt
>> touch myfavpythoncode.py
```
Now how can we check what is changed or tracked by the git?


```
>> git status
```
4. to add all the new files in git tracking,

```
>> git add *
```

5. to commit when you are satisfied with your contribution,

```
>> git commit -m "my first contribution" 
```

6. Now you have to let others know that you are contributing by pushing you changes to master repo.

```
>> git push origin dev_arnab
```

**At this point you've only made changes in to your branch. You have to request the leader of the project to review your contribution and then merge your work in master node and being impactful in the project.**


To check your commit history,

```
>> git log
```
To check the difference in any file with some git commits that you did yesterday,

```
>> git diff HEAD~1 myscript_arnab/matplotlib_basic.py
or
>> git show HEAD~1 myscript_arnab/matplotlib_basic.py
```
Here ```HEAD~1``` means (HEAD-1)th commit.

```
There are many advanced usage like cherrypick or git merge topic etc. Please follow the links provided in the resources to learn about them.
You can add instructions of those utilities in this README file and submit a pull request to improve the documentation.
```



