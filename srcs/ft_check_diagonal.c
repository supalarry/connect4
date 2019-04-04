/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_diagonal.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:31:53 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int ft_check_diagonal(char **brd, int *loc, int cols, int rows, char player, scores_database *scores)
{
	scores->d.traverse = 0;
	scores->d.count_right_up = 0;
	scores->d.count_right_down = 0;
	scores->d.count_left_up = 0;
	scores->d.count_left_down = 0;
	while (loc[0] - scores->d.traverse >= 0 && loc[1] + scores->d.traverse <= cols && brd[loc[0] - scores->d.traverse][loc[1] + scores->d.traverse] == player && scores->d.count_right_up != 4)
	{
		scores->d.count_right_up++;
		scores->d.traverse++;
	}
	scores->d.traverse = 0;
	while (loc[0] + scores->d.traverse <= rows && loc[1] + scores->d.traverse <= cols && brd[loc[0] + scores->d.traverse][loc[1] + scores->d.traverse] == player && scores->d.count_right_down != 4)
	{
		scores->d.count_right_down++;
		scores->d.traverse++;
	}
	scores->d.traverse = 0;
	while (loc[0] - scores->d.traverse >= 0 && loc[1] - scores->d.traverse >= 0 && brd[loc[0] - scores->d.traverse][loc[1] - scores->d.traverse] == player && scores->d.count_left_up != 4)
	{
		scores->d.count_left_up++;
		scores->d.traverse++;
	}
	scores->d.traverse = 0;
	while (loc[0] + scores->d.traverse <= rows && loc[1] - scores->d.traverse >= 0 && brd[loc[0] + scores->d.traverse][loc[1] - scores->d.traverse] == player && scores->d.count_left_down != 4)
	{
		scores->d.count_left_down++;
		scores->d.traverse++;
	}
	
	if (scores->d.count_right_up == 4 || scores->d.count_right_down == 4 || scores->d.count_left_up == 4 || scores->d.count_left_down == 4)
		return (1);
	return (0);
}
