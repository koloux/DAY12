/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:17:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:41:09 by nhuber           ###   ########.fr       */
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
	{
		ft_puterror("open) error\n");
		return (-1);
	}
	else
	{
		while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
		{
			buffer[ret] = '\0';
			size = size + ret;
		}
		if (close(fileds) == -1)
		{
			ft_puterror("close() error\n");
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

	size = ft_file_size(file_name);
	fileds = open(file_name, O_RDONLY);
	if (fileds == -1)
	{
		ft_puterror("open() error\n");
		return ;
	}
	else
	{
		while ((ret = read(fileds, buffer, size)) != 0)
		{
			buffer[ret] = '\0';
			ft_putbuffer(buffer, size, option);
		}
		if (close(fileds) == -1)
		{
			ft_puterror("close() error\n");
			return ;
		}
	}
}
