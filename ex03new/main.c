/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:11:38 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 19:21:14 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int	main(int ac, char **av)
{
	t_buffer_list *head;
	int i;
	int hex;

	i = (ft_strcmp(av[1], "-C") == 0) ? 2 : 1;
	hex = 0;
	head = NULL;
	while (i < ac)
	{
		ft_create_list(av[i], &head);
		i++;
	}
	ft_bad_fd(&head, ac, av);
	ft_star_elem(&head);
	ft_same_line(&head);
	ft_print(head, av);
/*	while (head != NULL)
	{
		i = 0;
		if (head->error != 2)
		{
			if (head->error == 3)
			{
				ft_putstr(head->hex_buffer);
				hex += head->ret;
			}
			else
			{
				ft_print_hexcount(hex);
				hex += head->ret;
				ft_putstr("  ");
				while (head->hex_buffer[i])
				{	
					ft_putstr(ft_itoa_base(head->hex_buffer[i], 16));
					ft_putchar(' ');
					if (i == 7 || i == 15)
						ft_putchar(' ');
					i++;
				}
				if (head->ret < 16)
				{
					j = head->ret;
					while (j < 16)
					{
						ft_putstr("   ");
						j++;
						if (j == 7 || j == 15)
							ft_putchar(' ');
					}
				}	
				ft_putstr(head->char_buffer);
				ft_putchar('\n');
			}
		}
		else
			write(head->error, head->hex_buffer, head->ret);
		head = head->next;
	}
	ft_print_hexcount(hex);
	ft_putchar('\n');
*/
	return (0);
}
