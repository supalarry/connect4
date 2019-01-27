/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_make_move.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:40 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int		*ft_make_move(char **board, int cols, int rows, int col, int player_id) // checks if such a move in col is possible and if so inserts . current player is for choosing which symbol to put
{
	int i;
	int	*loc;

	i = 0;
	loc = (int *)malloc(sizeof(int) * 2);
	if (board[rows - 1][col - 1] == '.') //if player wants to insert in a col where bottom is empty
	{
		board[rows - 1][col - 1] = (player_id == 0  ? 'O' : 'X');
		loc[0] = rows - 1;
		loc[1] = col - 1;
	}
	else // we have to loop through that whole column and find last item in column
	{
		while (board[i][col - 1] != 'X' && board[i][col - 1] != 'O')
			i++;
		board[i - 1][col - 1] = (player_id == 0  ? 'O' : 'X');
		loc[0] = i - 1;
		loc[1] = col - 1;
	}
	return (loc);
}