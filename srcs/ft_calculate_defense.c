/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_move.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:40 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int 	ft_calculate_defense(char **board, int cols, int rows, scores_database *scores) // checks if such a move in col is possible and if so inserts . current player is for choosing which symbol to put
{
	int		ai_col; 
	int		*ai_loc;
	int		needs_defense;
	char	**board_sandbox;

	ai_col = 1;
	while (ai_col <= cols)
	{
		if (ft_validate_move(board, cols, ai_col) == 1)
		{
			board_sandbox = ft_copy_board(board, cols, rows);
			ai_loc = ft_make_move(board_sandbox, cols, rows, ai_col, 1);
			needs_defense = ft_judge(board_sandbox, ai_loc, cols, rows, scores);
			if (needs_defense == 1)
				return(ai_col);
		}
		ai_col++;
	}
	return (-1);
}
