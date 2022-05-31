#!/bin/zsh
#Script to automatically create a folder with the name as current date.
way="/home/adihex/DSA/"
cd $way
day="$(date +%Y.%m.%d)" 
for d in $way/*/;
do
  cd $d/ && mkdir -p $day -- && cd $day
  touch "README.md" && echo "Created on $(date +%Y.%m.%d)." > "README.md"
done 
