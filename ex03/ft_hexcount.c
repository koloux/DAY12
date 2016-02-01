/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:07:55 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 23:45:08 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_hexcount(int n)
{
	char	*hexcount;
	int	len;

	hexcount = ft_itoa_base(n, 16);
	len = ft_strlen(hexcount);
	while (len < 7)
	{
		ft_putnbr(0);
		len++;
	}
	ft_putstr(hexcount);
}
