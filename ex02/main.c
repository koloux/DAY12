/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 14:35:14 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 22:52:27 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	main(int ac, char **av)
{
	int i;
	int option;

	if (ft_display_error(ac) == 1)
		return (1);
	i = 3;
	option = ft_atoi(av[2]);
	while (i < ac)
	{
		if (ac > 4 && ft_file_size(av[i]) > 0)
			ft_intro(av[i]);
		ft_display_file(av[i], option);
		i++;
		if (i != ac)
			ft_putchar('\n');
	}
	return (0);
}
