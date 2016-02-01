/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:07:55 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/18 23:51:52 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

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
