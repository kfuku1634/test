#!/bin/bash

maxdir=`ls | sort -n -t "t" --key "3" | tail -1`
maxnum=${maxdir:4}
nextnum=$((${maxnum}+1))
echo mkdir test${nextnum}
mkdir test${nextnum}

