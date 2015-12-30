/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:24:14 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		main(int ac, char **av)
{
	int		fileds;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	if ((fileds = ft_open_n_error(av[1])) == 1)
	{
		ft_putstr("error");
		return (0);
	}
	if (ft_display_error(ac) == 1)
		return (0);
	while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fileds) == -1)
	{
		write(2, "close error", 11);
		return (1);
	}
	return (0);
}
