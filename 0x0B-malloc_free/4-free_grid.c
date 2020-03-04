/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: pointer array arrays
 * @height: columns array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; j < heigth ; j++)
		free(grid[i]);
	free(grid);
}
