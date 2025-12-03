#!/usr/bin/env python3

import sys

total = 0
for joltages in sys.stdin:
    joltages = joltages.strip()

    for i in range(9, -1, -1):
        if (idx1 := joltages.find(str(i))) == -1 or idx1 > len(joltages) - 12:
            continue

        for j in range(9, -1, -1):
            if (idx2 := joltages.find(str(j), idx1 + 1)) == -1 or idx2 > len(joltages) - 12 + 1:
                continue

            for j in range(9, -1, -1):
                if (idx3 := joltages.find(str(j), idx2 + 1)) == -1 or idx3 > len(joltages) - 12 + 2:
                    continue

                for j in range(9, -1, -1):
                    if (idx4 := joltages.find(str(j), idx3 + 1)) == -1 or idx4 > len(joltages) - 12 + 3:
                        continue

                    for j in range(9, -1, -1):
                        if (idx5 := joltages.find(str(j), idx4 + 1)) == -1 or idx5 > len(joltages) - 12 + 4:
                            continue

                        for j in range(9, -1, -1):
                            if (idx6 := joltages.find(str(j), idx5 + 1)) == -1 or idx6 > len(joltages) - 12 + 5:
                                continue

                            for j in range(9, -1, -1):
                                if (idx7 := joltages.find(str(j), idx6 + 1)) == -1 or idx7 > len(joltages) - 12 + 6:
                                    continue

                                for j in range(9, -1, -1):
                                    if (idx8 := joltages.find(str(j), idx7 + 1)) == -1 or idx8 > len(joltages) - 12 + 7:
                                        continue

                                    for j in range(9, -1, -1):
                                        if (idx9 := joltages.find(str(j), idx8 + 1)) == -1 or idx9 > len(joltages) - 12 + 8:
                                            continue

                                        for j in range(9, -1, -1):
                                            if (idx10 := joltages.find(str(j), idx9 + 1)) == -1 or idx10 > len(joltages) - 12 + 9:
                                                continue

                                            for j in range(9, -1, -1):
                                                if (idx11 := joltages.find(str(j), idx10 + 1)) == -1 or idx11 > len(joltages) - 12 + 10:
                                                    continue

                                                for j in range(9, -1, -1):
                                                    if (idx12 := joltages.find(str(j), idx11 + 1)) == -1 or idx12 > len(joltages) - 12 + 11:
                                                        continue
                                                    
                                                    current_max = int(joltages[idx1] + joltages[idx2] + joltages[idx3] + joltages[idx4] + joltages[idx5] + joltages[idx6] + joltages[idx7] + joltages[idx8] + joltages[idx9] + joltages[idx10] + joltages[idx11] + joltages[idx12])
                                                    total += current_max
                                                    break
                                                break
                                            break
                                        break
                                    break
                                break
                            break
                        break
                    break
                break
            break
        break

print(total)
