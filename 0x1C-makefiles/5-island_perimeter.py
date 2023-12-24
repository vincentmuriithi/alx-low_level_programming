#!/usr/bin/python3
"""
module for calculating the perimeter
of the given grid
"""

def island_perimeter(grid):
    """
    function to calculate the perimeter of
    the grid
    Args:
          grid(list): a list of integers representing the island
    Returns:
        The perimeter of the island
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter +=4

                if j > 0 and grid[i][j -1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i - 1][j]:
                    perimeter -= 2
    return perimeter
