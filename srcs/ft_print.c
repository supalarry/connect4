/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:41 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

void	ft_print(char **board, int cols, int rows)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
