/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_move.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/27 20:19:28 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

int		ft_get_move(void)
{
	char			buffer[10];
	int				i;
	char			item;

	i = 0;
	item = 0;
	ft_bzero(buffer, 10);
	while (item != '\n')
	{
		read(0, &item, 1);
		buffer[i] = item;
		i++;
	}
	buffer[i] = '\0';
	return (ft_atoi(buffer));
}
