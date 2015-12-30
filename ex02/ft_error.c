/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:38:22 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 14:35:02 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

void	ft_puterror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	ft_display_error(int ac)
{
	if (ac == 2)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	return (0);
}
