#include "main.h"
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: input integer
* @height: input height
* Return: returns a pointer to a 2 dimensional array of integers upon success
*/
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

// Allocate memory for columns in each row and initialize to 0
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
// If memory allocation fails, free previously allocated memory
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

// Initialize each element to 0
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);


}
