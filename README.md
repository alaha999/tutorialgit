# tutorialgit
basic tutorial on git

We will learn some basic usage of git in this ultra short tutorial.
- Git is independent of Github.
- But today we will learn how to use git in collab with github to work with many people working on the same project.

### Procedure
---
1. Open your github account and open the link https://github.com/alaha999/tutorialgit<br>
you should see the repo tutorial git. Our job is now to clone this folder in to our local computer to edit, add scripts etc.
```
>> mkdir myproject
>> git clone https://github.com/alaha999/tutorialgit.git
>> ls
```
you should see one readme.md file.

**SOME BASIC COMMAND**

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
Now how can we check what is changed or tracked by the git?

```
>> git status
```
to add all the new files in git tracking,

```
>> git add *
```

to commit when you are satisfied with your contribution,

```
>> git commit -m "my first contribution" 
```

Now you have to let others know that you are contributing by pushing you changes to master repo.

```
>> git push origin dev_arnab
```

** At this point you've only made changes in to your branch. You have to request the leader of the project to review your contribution and then merge your work in master node and being impactful in the project.**


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


My name is Riya. :)



