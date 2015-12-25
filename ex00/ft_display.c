/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/25 18:47:10 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	main(int ac, char **av)
{
	int fileds;
	int ret;
	char buffer[BUF_SIZE + 1];
	
	fileds = open(av[1], O_RDONLY);
	if (ft_display_error(ac) == 1)
		return (0);
	if (fileds == -1)
	{
		ft_putstr("open error");
		return (1);	
	}
	while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fileds) == -1)
	{
		ft_putstr("close error");
		return (1);
	}
	return (0);
}
