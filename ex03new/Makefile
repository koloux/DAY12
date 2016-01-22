# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 15:47:49 by nhuber            #+#    #+#              #
#*   Updated: 2016/01/22 14:49:17 by nhuber           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

EXEC = ft_hexdump
CC = gcc
FLAGS = -Wall -Wextra -Werror
FILES =	ft_putchar.c ft_putstr.c ft_itoa_base.c\
		ft_strlen.c ft_strrev.c ft_strconcat.c\
		main.c ft_buffer_list.c ft_error.c \
		ft_list_push_back.c
TEMP = Makefile~ $(FILES:.c=.c~)

ALL: $(EXEC)

$(EXEC):
	$(CC) -o $(EXEC) $(FLAGS) $(FILES)

clean:
	/bin/rm -f $(TEMP)

fclean : clean
	/bin/rm -f $(EXEC)

re : fclean ALL
