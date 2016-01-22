/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:16:03 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/22 14:22:52 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_list_push_back(t_buffer_list **begin_list, t_buffer_list *new_elem)
{
	t_buffer_list	*elem;

	elem = *begin_list;
	if (*begin_list == NULL)
		*begin_list = new_elem;
	else
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = new_elem;
	}
}
