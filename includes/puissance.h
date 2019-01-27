/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   puissance.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renslaros <renslaros@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 09:56:17 by lskrauci       #+#    #+#                */
/*   Updated: 2019/01/26 23:24:27 by renslaros     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE_H
# define PUISSANCE_H
# include <stdio.h> // REMOVE THIS HIV

typedef struct
{
	int	iterate_right;
	int	iterate_left;
	int	count_right;
	int	count_left;
	int count_total;
} horizontal;

typedef struct
{
	int	iterate_down;
	int	count_down;
} vertical;

typedef struct
{
	int count_right_up;
	int count_right_down;
	int count_left_up;
	int count_left_down;
	int	traverse;
} diagonal;

typedef struct
{
	horizontal	h;
	vertical	v;
	diagonal	d;
}scores_database;

void	ft_start_game(char **board, int cols, int rows);
void	ft_fill(char **board, int cols, int rows, char fill);
void	ft_print(char **board, int cols, int rows);
int		ft_judge(char **board, int *location, int cols, int rows, scores_database *scores);
int		ft_validate_move(char **board, int cols, int col);
int 	ft_calculate_defense(char **board, int cols, int rows, scores_database *scores);
int 	ft_calculate_offense(char **board, int cols, int rows, scores_database *scores);
int		ft_check_horizontal(char **brd, int *loc, int cols, int rows, char player, scores_database *scores);
int		ft_check_vertical(char **brd, int *loc, int cols, int rows, char player, scores_database *scores);
int		ft_check_diagonal(char **brd, int *loc, int cols, int rows, char player, scores_database *scores);
int		ft_get_move(void);
int		*ft_make_move(char **board, int cols, int rows, int col, int player_id);
char	**ft_copy_board(char **board, int cols, int rows);
#endif