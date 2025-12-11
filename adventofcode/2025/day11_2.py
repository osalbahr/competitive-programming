#!/usr/bin/env python3

import sys

edge_list = {}

for line in sys.stdin:
    start, next_list = line.split(":")
    start = start.strip(":")
    next_list = tuple(next_list.split())
    edge_list[start] = next_list

node_to_paths = {"out": [("out",)]}

def get_paths(node):
    if node in node_to_paths:
        return node_to_paths[node]

    paths = []
    for next_node in edge_list[node]:
        for path in get_paths(next_node):
            paths.append((node,) + path)

    node_to_paths[node] = paths
    return node_to_paths[node]

total = 0
for path in get_paths("svr"):
    if "dac" in path and "fft" in path:
        total += 1

print(total)
