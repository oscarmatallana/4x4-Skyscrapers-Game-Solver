/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_valid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbali <dbali@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:29:00 by dbali             #+#    #+#             */
/*   Updated: 2026/03/22 15:29:03 by dbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_grid_valid(int **grid, char *clues);
int	check_row_visibility(int **grid, char *clues, int row, int *line);
int	check_col_visibility(int **grid, char *clues, int col, int *line);

int	is_grid_valid(int **grid, char *clues)
{
	int	line[4];

	if (!check_row_visibility(grid, clues, 0, line))
		return (0);
	if (!check_col_visibility(grid, clues, 0, line))
		return (0);
	return (1);
}
