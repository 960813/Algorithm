#!/usr/bin/env bash

read -r number

mkdir -p "BOJ/$number"
cp "solve.py" "BOJ/$number/solve.py"

git add .
git commit -m "BOJ #[$number] commit"
git push origin master