/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbali <dbali@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:25:20 by dbali             #+#    #+#             */
/*   Updated: 2026/03/22 13:25:24 by dbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		parse_input(char *str, char *clues);
void	init_grid(int **grid, int row);
void	free_grid(int **grid, int row);
int		solve_grid(int **grid, char *clues, int row, int col);
void	print_grid(int **grid, int row);
void	write_error(void);

int	main(int argc, char **argv)
{
	char	*clues;
	int		**grid;

	if (argc != 2)
		return (write_error(), 1);
	clues = malloc(16);
	grid = malloc(4 * sizeof(int *));
	if (!clues || !grid)
		return (1);
	if (!parse_input(argv[1], clues))
		return (write_error(), 1);
	init_grid(grid, 0);
	if (!solve_grid(grid, clues, 0, 0))
		return (write_error(), 1);
	print_grid(grid, 0);
	free_grid(grid, 0);
	free(clues);
	return (0);
}
