/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:38:22 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/29 17:51:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	ft_display_error(int ac)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	ft_open_n_error(char *file_name)
{
	int fileds;

	fileds = open(file_name, O_RDONLY);
	if (fileds == -1)
	{
		write(2, "error", 12);
		return (1);
	}
	else
		return (fileds);
}
