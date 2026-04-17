/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbali <dbali@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 14:19:51 by dbali             #+#    #+#             */
/*   Updated: 2026/03/22 14:19:54 by dbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print_row(int *row, int col)
{
	char	space;

	space = ' ';
	if (col == 4)
		return ;
	ft_putnbr(row[col]);
	if (col < 3)
		write(1, &space, 1);
	print_row(row, col + 1);
}

void	print_grid(int **grid, int row)
{
	char	nl;

	nl = '\n';
	if (row == 4)
		return ;
	print_row(grid[row], 0);
	write(1, &nl, 1);
	print_grid(grid, row + 1);
}
