#!/bin/bash

# Author:   noalias
# Date: Dec 02 2018

git status

if [[ $1 != "" ]]; then
    git add $1
fi

git commit -a -m"update"

git push

exit 0
