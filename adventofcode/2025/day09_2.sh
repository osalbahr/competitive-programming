#!/usr/bin/env bash

for i in {0..9}
do
    ./day09_2.py "$i" < day09.in &
done

for i in {0..9}
do
    wait
done

echo -n "Answer: "
sort -n out | tail -1
