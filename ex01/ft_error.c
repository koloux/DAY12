/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:38:22 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/08 12:25:10 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		ft_display_error(int ac)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}

int		ft_open_n_error(char *file_name)
{
	int fileds;

	fileds = open(file_name, O_RDONLY);
	if (fileds == -1)
	{
		write(2, "cat: ", 5);
		write(2, file_name, ft_strlen(file_name));
		write(2, ": No such file or directory\n", 28);
		return (-1);
	}
	else
		return (fileds);
}

void	ft_read(int fileds)
{
	int		ret;
	char	buffer[BUF_SIZE + 1];

	while ((ret = read(fileds, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
}
