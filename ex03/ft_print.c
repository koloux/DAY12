/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 18:18:47 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 23:08:52 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_print(t_buffer_list *begin_list, char **av)
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
				ft_print_hexcount(hex);
				ft_print_hex_buffer(begin_list->hex_buffer);
				if (ft_strcmp(av[1], "-C") == 0)
					ft_print_space(begin_list);
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
	int j;

	j = elem->ret;
	ft_putstr("  ");
	while (j < 16)
	{
		ft_putstr("   ");
		j++;
	}
	ft_putstr(elem->char_buffer);
}

void	ft_print_hex_buffer(char *hex_buffer)
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
