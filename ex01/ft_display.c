/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:26:59 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		main(int ac, char **av)
{
	int	fileds;
	int	i;

	if (ft_display_error(ac) == 1)
		return (0);
	i = 1;
	while (i < ac)
	{
		if ((fileds = ft_open_n_error(av[i])) != 0)
			return (0);
		ft_read(fileds);
		if (close(fileds) == -1)
		{
			write(2, "close error", 11);
			return (1);
		}
		i++;
	}
	return (0);
}
