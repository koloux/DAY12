/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 15:03:43 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:09:02 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

void	ft_putbuffer(char *buffer, int size, int option)
{
	int i;

	if (option >= size)
	{
		ft_putstr(buffer);
		return ;
	}
	else
	{
		i = size - option;
		while (buffer[i])
		{
			ft_putchar(buffer[i]);
			i++;
		}
	}
}
