/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 18:18:47 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 19:33:45 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print(t_buffer_list *begin_list, char **av)
{
	int hex;

	hex = 0;
	while (begin_list !=NULL)
	{
		if(begin_list->error != 2)
		{
			if (begin_list->error == 3)
			{
				ft_putstr(begin_list->hex_buffer);
				hex+= begin_list->ret;
			}
			else
			{
				ft_print_hexcount(hex);
				hex += begin_list->ret;
				ft_print_hex_buffer(begin_list->hex_buffer);
				if (ft_strcmp(av[1], "-C") == 0)
				{
					ft_print_space(begin_list->ret);
					ft_putstr(begin_list->char_buffer);
				}
				ft_putchar('\n');
			}
		}
		else
			write(begin_list->error, begin_list->hex_buffer, begin_list->ret);
		begin_list = begin_list->next;
	}		
}
void	ft_print_space(int elem_ret)
{
	int j;

	if (elem_ret < 16)
	{
		j = elem_ret;
		while (j < 16)
		{
			ft_putstr("   ");
			j++;
			if (j == 7 || j == 15)
				ft_putchar(' ');
		}
	}
}

void	ft_print_hex_buffer(char *hex_buffer)
{
	int i;

	i = 0;
	ft_putstr("  ");
	while (hex_buffer[i])
	{
		ft_putstr(ft_itoa_base(hex_buffer[i], 16));
		ft_putchar(' ');
		if (i == 7 || i == 15)
			ft_putchar(' ');
		i++;
	}
}
