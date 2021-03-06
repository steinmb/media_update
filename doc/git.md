## GIT

### Branch no longer cleanly applies to master

The original code got merged into master. Bugs was later found and we need to do changes but we do not want to create new RTS issue and branch. 

The new changes is first committed to the original branch. We now  need to cherry pick the commit and put it on top of a fresh master branch.

Make sure your origin/master is up2date.

    git fetch

Check out the original branch

    git checkout branch_name

List the patches that you made:

    git log --oneline origin/master..

Now move your HEAD to the master branch.

    git reset --hard origin/master

and reapply the patches you had (commit ids from the 'git log' invocation above)

    git cherry-pick commit_id1
    git cherry-pick commit_id2

Test run

    git push --dry-run

If everything looks good, go, go, go!

    git push

Git might reject you if the changes committed also was pushed before you started doing this. Typical warning is that your HEAD is behind:

    error: failed to push some refs to 'git@git.uib.no:site/w3.uib.no.git' 
    Updates were rejected because the tip of your current branch is behind its remote counterpart.

Normally it still safe to push but you then need to force it:

    git push --force

