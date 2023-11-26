/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:17:59 by mburova           #+#    #+#             */
/*   Updated: 2023/11/26 15:59:18 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**grid(void)
{
	char	**grid;
	int	i;
	int	j;

	grid = (char**)malloc(4*sizeof(char*));
	if (!grid)
		return (0);
	i = 0;
	while (i < 4)
	{
		grid[i] = (char*)malloc(4*sizeof(char));
		i++;
		if (!grid[i])
		{
			j = 0;
			while(j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return 0;
		}
	}
	return (grid);
}

int	grid_control(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	cond_control(char **arvg, int num)
{
	int	i;

	i = 1;
	while (arvg[i])
	{


}

int	solve(int **grid, int row, int col)
{
	if (col == 4 && row == 4)
		return 1;
	else if (col == 4)
	{
		row++;
		col = 0;
	}
	if (grid[])
