/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:16:03 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 18:11:15 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_list_push_back(t_buffer_list **begin_list, char *buffer)
{
	t_buffer_list	*elem;

	elem = *begin_list;
	if (elem == NULL)
		*begin_list = ft_create_elem(buffer, ft_strlen(buffer));
	else
	{
		while (elem->next != NULL)
			elem = elem->next;
		if (elem->ret >= 16 || ft_strlen(buffer) > 16)
			elem->next = ft_create_elem(buffer, ft_strlen(buffer));
		else
		{
			elem->hex_buffer = ft_strconcat(elem->hex_buffer, buffer);
			elem->ret = elem->ret + ft_strlen(buffer);
			elem->char_buffer = ft_char_buffer(elem->hex_buffer);
		}
	}
}
