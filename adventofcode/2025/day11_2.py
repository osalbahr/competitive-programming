#!/usr/bin/env python3

import sys

edge_list = {}

for line in sys.stdin:
    start, next_list = line.split(":")
    start = start.strip(":")
    next_list = tuple(next_list.split())
    edge_list[start] = next_list

total = 0

def count_paths(path):
    node = path[-1]

    if node == "out":
        if "dac" in path and "fft" in path:
            global total
            total += 1

        return

    for next_node in edge_list[node]:
        if next_node not in path:
            count_paths(path + (next_node,))

count_paths(("svr",))

print(total)