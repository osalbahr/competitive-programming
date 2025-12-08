#!/usr/bin/env python3

import sys
from scipy.cluster.hierarchy import DisjointSet

boxes = [tuple(map(int, line.split(","))) for line in sys.stdin]

disjoint_set = DisjointSet(boxes)

distances = []

def distance(first, second):
    dx = (first[0] - second[0]) ** 2
    dy = (first[1] - second[1]) ** 2
    dz = (first[2] - second[2]) ** 2

    return dx + dy + dz

for i in range(len(boxes)):
    for j in range(i + 1, len(boxes)):
        first = boxes[i]
        second = boxes[j]
        distances.append([distance(first, second), first, second])

distances.sort()
for i in range(1000):
    disjoint_set.merge(distances[i][1], distances[i][2])

lengths = sorted([len(subset) for subset in disjoint_set.subsets()], reverse=True)

total = 1
for i in range(3):
    total *= lengths[i]

print(total)
