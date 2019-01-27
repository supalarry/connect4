# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rlaros <rlaros@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/17 09:42:33 by lskrauci       #+#    #+#                 #
#    Updated: 2019/01/27 18:32:56 by rlaros        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = "Power 4"

all: $(NAME)

$(NAME):
	gcc -o $(NAME) main.c ./srcs/*.c -I./ -I./includes/ -L. -lft

clean:
	rm -f ./srcs/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all