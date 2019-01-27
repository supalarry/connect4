/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_horizontal.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:31:53 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int ft_check_horizontal(char **brd, int *loc, int cols, int rows, char player, scores_database *scores)
{	
	scores->h.iterate_right = loc[1];
	scores->h.iterate_left = loc[1];
	scores->h.count_right = 0;
	scores->h.count_left = 0;
	scores->h.count_total = 0;
	while (scores->h.iterate_right <= cols && brd[loc[0]][scores->h.iterate_right] == player && scores->h.count_right != 4)
	{
		scores->h.count_right++;
		scores->h.iterate_right++;
	}
	while (scores->h.iterate_left >= 0 && brd[loc[0]][scores->h.iterate_left] == player && scores->h.count_left != 4)
	{
		scores->h.count_left++;
		scores->h.iterate_left--;
	}
	scores->h.iterate_right = loc[1];
	while (scores->h.iterate_right <= cols && brd[loc[0]][scores->h.iterate_right] == player)
	{
		scores->h.iterate_right++;
	}
	scores->h.iterate_right--;
	while (scores->h.iterate_right <= cols && brd[loc[0]][scores->h.iterate_right] == player)
	{
		scores->h.count_total++;
		scores->h.iterate_right--;
	}
	/*printf("--------------\n");
	printf("count_right %d\n", count_right);
	printf("count_left %d\n", count_left);
	printf("count_total %d\n", count_total);*/
	if (scores->h.count_right == 4 || scores->h.count_left == 4 || scores->h.count_total >= 4)
		return (1);
	return (0);
}