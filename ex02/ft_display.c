/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 22:47:41 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		ft_file_size(char *file_name)
{
	int		fileds;
	int		ret;
	int		size;
	char	buffer[BUF_SIZE + 1];

	size = 0;
	if ((fileds = open(file_name, O_RDONLY)) == -1)
		return (-1);
	else
	{
		while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
		{
			buffer[ret] = '\0';
			size = size + ret;
		}
		if (close(fileds) == -1)
		{
			ft_puterror(file_name);
			return (-1);
		}
		return (size);
	}
}

void	ft_display_file(char *file_name, int option)
{
	int		fileds;
	int		ret;
	int		size;
	char	buffer[ft_file_size(file_name) + 1];

	if ((fileds = open(file_name, O_RDONLY)) == -1)
		ft_puterror(file_name);
	else
	{
		size = ft_file_size(file_name);
		while ((ret = read(fileds, buffer, size)) != 0)
		{
			buffer[ret] = '\0';
			ft_putbuffer(buffer, size, option);
		}
		if (close(fileds) == -1)
		{
			ft_puterror(file_name);
		}
	}
}
