/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 17:13:06 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/29 14:46:30 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_star_elem(t_buffer_list **begin_list)
{
	t_buffer_list *elem;
	t_buffer_list *star;

	elem = *begin_list;
	while (elem->next != NULL)
	{
		star = elem->next;
		while (ft_strcmp(elem->hex_buffer, star->hex_buffer) == 0 && star)
		{
			star->hex_buffer = "*\n";
			star->error = 3;
			star = star->next;
		}
		elem = elem->next;
	}
}

void	ft_same_line(t_buffer_list **begin_list)
{
	t_buffer_list *cur;
	
	cur = *begin_list;
	while (cur->next != NULL)
	{
		if (cur->error == 3 && cur->next->error == 3)
		{
			cur->ret += cur->next->ret;
			cur->next = cur->next->next;
		}
		if (cur->next != NULL)
			cur = cur->next;
	}
}
