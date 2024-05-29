#!/usr/bin/python3
"""Module for the island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of island
    Args:
        grid (list): grid to calculate
    Returns:
        The perimeter of island
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    num_square = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                num_square += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return num_square * 4 - edge * 2
