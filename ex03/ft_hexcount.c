/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:07:55 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/27 16:19:00 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_hexcount(int n)
{
	char	*hexcount;
	int	len;

	hexcount = ft_itoa_base(n, 16);
	if ((len = ft_strlen(hexcount)) < 9)
	{
		while (len < 8)
		{
			ft_putnbr(0);
			len++;
		}
	}
	ft_putstr(hexcount);
}
