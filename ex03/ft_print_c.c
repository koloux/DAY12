/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_C.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:55:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/08 13:30:09 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_print_c(t_buffer_list *begin_list, char **av)
{
	int hex;

	hex = 0;
	while (begin_list != NULL)
	{
		if (begin_list->error == 2)
			write(begin_list->error, begin_list->hex_buffer, begin_list->ret);
		else
		{
			if (begin_list->error == 3)
				ft_putstr(begin_list->hex_buffer);
			else
			{
				ft_print_hexcount(hex, av[1]);
				ft_print_hex_c(begin_list->hex_buffer);
				ft_print_space(begin_list);
				ft_putstr("  ");
				ft_putstr(begin_list->char_buffer);
				ft_putchar('\n');
			}
			hex += begin_list->ret;
		}
		begin_list = begin_list->next;
	}
	return (hex);
}

void	ft_print_space(t_buffer_list *elem)
{
	int i;

	i = elem->ret;
	while (i < 16)
	{
		if (i == 15 && elem->ret >= 8)
			ft_putstr("  ");
		else
			ft_putstr("   ");
		i++;
	}
}

void	ft_print_hex_c(char *hex_buffer)
{
	int i;

	i = 0;
	ft_putstr("  ");
	while (hex_buffer[i])
	{
		ft_putstr(ft_itoa_base(hex_buffer[i], 16));
		if (i != 15)
			ft_putchar(' ');
		if (i == 7)
			ft_putchar(' ');
		i++;
	}
}
