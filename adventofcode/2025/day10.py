#!/usr/bin/env python3

import sys
from heapq import heappop, heappush


def main():
    total = 0
    for line in sys.stdin:
        lights, *buttons, _ = line.split()
        lights = lights.strip("[]")
        buttons = [eval(button) for button in buttons]
        for i in range(len(buttons)):
            if type(buttons[i]) is int:
                buttons[i] = (buttons[i],)

        min_presses = get_min_presses(lights, buttons)
        total += min_presses

    print(total)


def get_min_presses(lights, buttons):
    h = [(0, lights)]
    seen = set(lights)
    while True:
        count, current_lights = heappop(h)
        if "#" not in current_lights:
            return count

        for button in buttons:
            new_lights = press(current_lights, button)
            if new_lights not in seen:
                heappush(h, (count + 1, new_lights))
                seen.add(new_lights)


def press(lights, button):
    new_lights = ""
    for i in range(len(lights)):
        if i in button:
            new_lights += "#" if lights[i] == "." else "."
        else:
            new_lights += lights[i]

    return new_lights


if __name__ == "__main__":
    main()
