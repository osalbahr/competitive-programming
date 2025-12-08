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

i = 0
while len(disjoint_set.subsets()) > 1:
    disjoint_set.merge(distances[i][1], distances[i][2])
    last_two = [distances[i][1], distances[i][2]]

    i += 1

print(last_two[0][0] * last_two[1][0])
