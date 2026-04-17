/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbali <dbali@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:38:27 by dbali             #+#    #+#             */
/*   Updated: 2026/03/22 13:38:29 by dbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	zero_row(int *row, int col);

void	init_grid(int **grid, int row)
{
	if (row == 4)
		return ;
	grid[row] = malloc(4 * sizeof(int));
	zero_row(grid[row], 0);
	init_grid(grid, row + 1);
}

void	zero_row(int *row, int col)
{
	if (col == 4)
		return ;
	row[col] = 0;
	zero_row(row, col + 1);
}

void	free_grid(int **grid, int row)
{
	if (row == 4)
		return (free(grid));
	free(grid[row]);
	free_grid(grid, row + 1);
}
