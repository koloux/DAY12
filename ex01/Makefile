# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 15:47:49 by nhuber            #+#    #+#              #
#*   Updated: 2015/12/29 16:17:25 by nhuber           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAG = -Wall -Wextra -Werror
FILES =	ft_putchar.c ft_putstr.c ft_error.c \
		ft_display.c
	  	
OBJ = ft_putchar.o ft_putstr.o ft_error.o \
		ft_display.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
