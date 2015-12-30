/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 18:18:30 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:03:35 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

void	ft_intro(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}

int	ft_c_option(char *option)
{
	char	*str;

	str = ++option;
	return (ft_atoi(++str));	
}
