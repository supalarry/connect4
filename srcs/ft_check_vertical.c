/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_vertical.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:31:53 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int ft_check_vertical(char **brd, int *loc, int cols, int rows, char player, scores_database *scores)
{	
	scores->v.iterate_down = loc[0];
	scores->v.count_down = 0;
	while (scores->v.iterate_down <= rows && brd[scores->v.iterate_down][loc[1]] == player && scores->v.count_down != 4)
	{
		scores->v.count_down++;
		scores->v.iterate_down++;
	}
	/*printf("--------------\n");
	printf("count down %d\n", count_down);*/
	if (scores->v.count_down == 4)
		return (1);
	return (0);
}