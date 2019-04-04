/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/27 20:10:22 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "puissance.h"

/* argv[1] = rows argv[2] = cols */
int main(int argc, char **argv)
{
	int		i; // used to store ith address within the array of addresses (board)
	int		cols; // number of columns
	int		rows; // number of rows
	char	**board; // array where each element is an address of a whole row

	i = 0;
	rows = 0; // get amount of rows from user input
	cols = 0; // get amount of cols from user input
	if (argc == 3)
	{
		rows = ft_atoi(argv[1]); // get amount of rows from user input
		cols = ft_atoi(argv[2]); // get amount of cols from user input
		if (rows < 6)
			rows = 6;
		if (cols < 7) // the size has to be at least 6 rows 7 columns
			cols = 7;
		board = (char **)malloc(sizeof(char *) * rows); // allocate space so that each row has its own address
		while (i < rows)
		{
			board[i] = (char *)malloc(sizeof(char) * cols); // make each row to be able to hold 'cols' columns
			i++;
		}
		ft_fill(board, cols, rows, '.'); // fill the empty board
		ft_putstr("Hi There, You'll be playing against skynet today.'\n");
		ft_putstr("Goodluck, You'll need it.'\n");
		ft_print(board, cols, rows); // print empty board game
		ft_start_game(board, cols, rows); // launch the game
	}
	else
	{
		ft_putstr("Usage : Executable row_count column_count\n");
	}
	return (0);
}
