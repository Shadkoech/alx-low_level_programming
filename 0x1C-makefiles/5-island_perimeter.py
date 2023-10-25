#!/usr/bin/python3
"""python module that returns the perimeter of the island
described in the grid below:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water
"""


def island_perimeter(grid):
    """
    Function that gives the perimeter of the island described
    Args:
        grid: List of integers that represent an island
    Returns:
        The island perimeter
    """

    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    # going through every step(rows) in height

    for i in range(height):
        for j in range(width):
            # Check to see if it is 1 and if so increment
            if grid[i][j] == 1:
                size += 1

                # After each addition step, see if neighbours are land/water
                # if Land subtract, if water add
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1

                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    # calculate the perimeter
    perimeter = size * 4 - edges * 2
    return (perimeter)
