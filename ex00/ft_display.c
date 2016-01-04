/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/04 11:33:21 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		main(int ac, char **av)
{
	int		fileds;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	if (ft_display_error(ac) == 1)
		return (1);
	if ((fileds = open(av[1], O_RDONLY)) == -1)
	{
		write(2, "open() error\n", 14);
		return (1);
	}
	while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if ((close(fileds)) == -1)
	{
		write(2, "close() error\n", 15);
		return (1);
	}
	return (0);
}
