/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fill.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:37 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

void	ft_fill(char **board, int cols, int rows, char fill)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			board[i][j] = fill;
			j++;
		}
		j = 0;
		i++;
	}
}