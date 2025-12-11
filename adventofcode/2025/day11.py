#!/usr/bin/env python3

import sys

edge_list = {}

for line in sys.stdin:
    start, next_list = line.split(":")
    start = start.strip(":")
    next_list = tuple(next_list.split())
    edge_list[start] = next_list

node_to_count = {}
node_to_count["out"] = 1

def get_path_count(node):
    if node  not in node_to_count:
        node_to_count[node] = sum(get_path_count(next_node) for next_node in edge_list[node])
    
    return node_to_count[node]

print(get_path_count("you"))
