#!/bin/bash
#auto-git v5.0

# read -p "DELETE ANY CHANGES before the last commit? (y/n): " answer

echo -e "\n\t\tDELETE LOCAL CHANGES? (YES) \n\t\t\tOR\n\t\tPUSH LOCAL CHANGES (ENTER)\n"
read -s -n 3 -p "(yes/ENTER): " answer

if [[ $answer == "yes" || $answer == "Yes" || $answer == "YES" ]]; then
  git stash
  git stash clear
  git pull
  echo -e "\nYour Repository is updated to the latest commit!\n"
else
  echo -e "ENTERED\n"
  read -p "Your Commit Message: " commt

  if [[ -z "$commt" || ${#commt} -lt 3 ]]; then
    commt="Routine Commit"
    git add . && \
    git add -u && \
    git commit -m $"$commt"$'\nby @arfazhxss on '"$(date +'%a %d %b %Y')" && \
    git push origin HEAD
    git log > commit-hist.txt
    rm -rf .DS_Store/
    echo -e "\nYour changes has been pushed :)\n"
  else
    git add . && \
    git add -u && \
    git commit -m $"$commt"$'\nCommit by @arfazhxss on '"$(date +'%a %d %b %Y')" && \
    git push origin HEAD
    git log > commit-hist.txt
    rm -rf .DS_Store/
    echo -e "\nYour changes has been pushed :)\n"
  fi
fi
