/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 14:35:14 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/20 14:48:59 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	main(int ac, char **av)
{
	
	(void)ac;
	(void)av;
	int i;
	t_list	*elem;

	i = 0;
	while (i < 100)
	{
		ft_print_hexcount(i);
		ft_putchar('\n');
		i += 16;
	}
	ft_create_buffer_list(av[1], elem);
	ft_putstr(elem->str);
	return (0);
}
