#!/usr/bin/env bash

if [ $# -ne '1' ]; then
  exit 0
fi

number=$1

mkdir -p "BOJ/$number"
cp "solve.py" "BOJ/$number/solve.py"

git add .
git commit -m "BOJ #[$number] commit"
git push origin master
