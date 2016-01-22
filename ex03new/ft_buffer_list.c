/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:12:36 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/22 15:19:06 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_buffer_list	*ft_create_elem(char *buffer, int ret, int error)
{
	t_buffer_list	*elem;

	if (!(elem = (t_buffer_list *)(malloc(sizeof(t_buffer_list)))))
		return (NULL);
	elem->buffer = buffer;
	elem->ret = ret;
	elem->error = error;
	elem->next = NULL;
	return (elem);
}

void 		ft_create_list(char *file_name, t_buffer_list **begin_list)
{
	int		fd;
	int		ret;
	char		buffer[BUF_SIZE];
	t_buffer_list	*elem;
	t_buffer_list	*head;
	t_buffer_list	*cur;

	cur = NULL;
	head = NULL;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		*begin_list = ft_create_elem(ft_error_elem(file_name), 0, 1);
	else
	{
		while ((ret = read(fd, buffer, 16)) != 0)
		{
			buffer[ret] = '\0';
			elem = ft_create_elem(buffer, ret, 0);
			if (cur == NULL)
			{
				cur = elem;
				head = cur;
			}
			else
			{
				cur->next = elem;
				cur = elem;
			}
		}
		if (close(fd) == -1)
			*begin_list = ft_create_elem(ft_error_elem(file_name), 0, 1);
	}
	*begin_list = head;
}
