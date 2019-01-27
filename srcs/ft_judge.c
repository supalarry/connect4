/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_judge.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:39 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int		ft_judge(char **board, int *location, int cols, int rows, scores_database *scores)
{
	char	player_char;

	player_char = board[location[0]][location[1]];
	cols--;
	rows--;
	if (ft_check_horizontal(board, location, cols, rows, player_char, scores) == 1)
	{
		return (1);
	}
	else if (ft_check_vertical(board, location, cols, rows, player_char, scores) == 1)
	{
		return (1);
	}
	else if (ft_check_diagonal(board, location, cols, rows, player_char, scores) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}