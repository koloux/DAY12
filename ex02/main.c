/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 14:35:14 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:03:51 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	main(int ac, char **av)
{
	int i;
	int option;

	if (ft_display_error(ac) == 1)
		return (1);
	i = 2;
	option = ft_c_option(av[1]);
	while (i < ac)
	{
		if (ac > 3)
			ft_intro(av[i]);
		ft_display_file(av[i], option);
		i++;
	}
	return (0);
}
