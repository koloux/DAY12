/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:38:22 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/04 11:17:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

void	ft_puterror(char *str)
{
	write(2, "tail: ", 6);
	write(2, str, ft_strlen(str));
	write(2, ": No such file or directory\n", 29);
}

int		ft_display_error(int ac)
{
	if (ac == 3)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	return (0);
}
