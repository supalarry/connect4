/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_copy_board.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/27 14:21:25 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/27 14:21:26 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

char **ft_copy_board(char **board, int cols, int rows)
{
	int		i;
	int		j;
	char	**board_copy;

	i = 0;
	j = 0;
	board_copy = (char **)malloc(sizeof(char *) * rows);
	while (i < rows)
	{
		board_copy[i] = (char *)malloc(sizeof(char) * cols);
		i++;
	}
	i = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			board_copy[i][j] = board[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (board_copy);
}
