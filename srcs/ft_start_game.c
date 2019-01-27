/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_start_game.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/27 18:29:28 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

/*
** @desc Starts the 4 in a row game.
** @desc Handles player turns
** @desc Keeps looping until judge decides the game ended. ( return 1 )
** @param char** board - array of addresses where each adress is a row.
** @param int cols - Width of a row. ( Columns of the board )
** @param int rows - Number of adresses within the board. ( Rows of the board )
** @return void
*/
void	ft_start_game(char **board, int cols, int rows)
{
	int				col;
	int				player_id;
	int				*loc;
	int				ai_defense;
	int				ai_offense;
	scores_database scores;

	col = 0;
	loc = NULL;
	player_id = rand() % 2;
	while (loc == NULL || ft_judge(board, loc, cols, rows, &scores) != 1)
	{
		if (player_id == 0)
		{
			ft_putstr("Perry's Turn'\n");
			ai_defense = ft_calculate_defense(board, cols, rows, &scores);
			if (ai_defense != -1)
			{
				loc = ft_make_move(board, cols, rows, ai_defense, 0);
			}
			else
			{
				ai_offense = ft_calculate_offense(board, cols, rows, &scores);
				loc = ft_make_move(board, cols, rows, ai_offense, 0);
			}
			player_id = 1;
		}
		else
		{
			ft_putstr("Make a move between 1 and ");
			ft_putnbr(cols);
			ft_putchar('\n');
			col = ft_get_move();
			while (ft_validate_move(board, cols, col) != 1)
			{
				ft_putstr("Nice try, let's go for a valid input");
				col = ft_get_move();
			}
			loc = ft_make_move(board, cols, rows, col, 1);
			player_id = 0;
		}
		ft_print(board, cols, rows);
	}
}
