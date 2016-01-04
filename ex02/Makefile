# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 15:47:49 by nhuber            #+#    #+#              #
#*   Updated: 2016/01/04 11:15:24 by nhuber           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAG = -Wall -Wextra -Werror
FILES =	ft_putchar.c ft_putstr.c ft_error.c \
		ft_tail.c ft_display.c ft_atoi.c \
		main.c ft_putbuffer.c ft_strlen.c
	  	
OBJ = ft_putchar.o ft_putstr.o ft_error.o \
		ft_tail.o ft_display.o ft_atoi.o \
		main.o ft_putbuffer.o ft_strlen.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
