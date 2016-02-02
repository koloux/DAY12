/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:07:55 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/02 16:13:04 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_hexcount(int n, char *option)
{
	char	*hexcount;
	int	len;
	int	nb_dig;

	hexcount = ft_itoa_base(n, 16);
	len = ft_strlen(hexcount);
	nb_dig = (ft_strcmp(option, "-C")) ? 7 : 8;
	while (len < nb_dig)
	{
		ft_putnbr(0);
		len++;
	}
	ft_putstr(hexcount);
}
