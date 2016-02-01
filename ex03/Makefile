# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 15:47:49 by nhuber            #+#    #+#              #
#*   Updated: 2016/01/11 19:59:48 by nhuber           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
FLAG = -Wall -Wextra -Werror
FILES =	ft_putchar.c ft_putstr.c ft_atoi.c \
		ft_putnbr.c main.c ft_strlen.c \
		ft_char_buffer.c ft_hex_convert.c
	  	
OBJ = ft_putchar.o ft_putstr.o ft_atoi.o \
		ft_putnbr.o main.o ft_strlen.o \
		ft_char_buffer.o ft_hex_convert.o
		
ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
