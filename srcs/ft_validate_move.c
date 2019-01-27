/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_validate_move.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:43 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int		ft_validate_move(char **board, int cols, int col)
{
	if(board[0][col - 1] == '.' && (col >= 1 && col <= cols))
	{
		return (1);
	}
	else
	{
		ft_putstr("You entered column outside the board / Column you chose is full\n");
		return (0);
	}
}