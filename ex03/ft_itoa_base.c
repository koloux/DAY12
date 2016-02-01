/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:44:28 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/28 16:51:10 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count_digit(int value, int base)
{
	int	count;
	
	value < 0 ? value *= -1 : value;
	count = 0;
	while (value > 0)
	{
		value /= base;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int	i;
	int	count;
	char	hex[16] = {'0','1','2','3','4','5','6','7',
		'8','9','a','b','c','d','e','f'};

	i = 0;
	count = ft_count_digit(value, base);
	if (!(ret = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	count > 1 ? count--: count;
	while (count >= 0 && value >= 0)
	{
		ret[count] = hex[value % base];
		value = value / base;
		count--;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
