#!/usr/bin/python3
"""Define a function to find perimeter of an island"""


def island_perimeter(grid):
    """Returns perimeter of the island

    Args:
        grid (list): list of ints rep the island
    """
    width = len(grid[0])
    length = len(grid)
    sides = 0
    size = 0

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > -0 and grid[i - 1][j] == 1):
                    sides += 1
    return size * 4 - sides * 2
