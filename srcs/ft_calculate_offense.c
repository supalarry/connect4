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

int 	ft_calculate_offense(char **board, int cols, int rows, scores_database *scores) // checks if such a move in col is possible and if so inserts . current player is for choosing which symbol to put
{
	int		ai_col;
	int		*ai_loc;
	int		needs_offense;
	char	**board_sandbox;
	int		highest_score;
	int		ptz;
	int		best_move;

	ai_col = 1;
	highest_score = 0;
	best_move = ai_col;
	while (ai_col <= cols)
	{
		ptz = 0;
		if (ft_validate_move(board, cols, ai_col) == 1)
		{
			board_sandbox = ft_copy_board(board, cols, rows);
			ai_loc = ft_make_move(board_sandbox, cols, rows, ai_col, 0);
			ft_judge(board_sandbox, ai_loc, cols, rows, scores);
			ptz = ptz + scores->h.count_right;
			ptz = ptz + scores->h.count_left;
			ptz = ptz + scores->h.count_total;
			ptz = ptz + scores->v.count_down;
			ptz = ptz + scores->d.count_right_up;
			ptz = ptz + scores->d.count_right_down;
			ptz = ptz + scores->d.count_left_up;
			ptz = ptz + scores->d.count_left_down;
			if (ptz > highest_score)
			{
				highest_score = ptz;
				best_move = ai_col;
			}
		}
		ai_col++;
	}
	return (best_move);
}
