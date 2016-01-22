/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:44:28 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/21 16:17:41 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int	i;
	int	sign;
	char	hex[16] = {'0','1','2','3','4','5','6','7',
		'8','9','a','b','c','d','e','f'};

	if (!(ret = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	i = 0;
	sign = 0;
	if (value < 0 && base == 10)
	{
		sign = -1;
		value *= -1;
	}
	while (value > 0)
	{
		ret[i++] = hex[value % base];
		value = value / base;
	}
	if (sign < 0)
		ret[i++] = '-';
	ret[i] = '\0';
	return (ft_strrev(ret));
}
