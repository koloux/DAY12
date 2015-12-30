/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 13:36:56 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:01:49 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		evaluate_char(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && evaluate_char(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
