/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 00:19:43 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/21 14:01:55 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

t_list	*ft_create_elem(char *str)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->str = str;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_create_buffer_list(char *file_name)
{
	int	fd;
	int	nb_char;
	char	buffer[17];
	t_list	*begin_list;
	t_list	*list;

	begin_list = NULL;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		begin_list = ft_create_elem("Open() error\n");
	while ((nb_char = read(fd, buffer, 16)) != 0)
	{
		buffer[nb_char] = '\0';
		list = ft_create_elem(buffer);
		if (begin_list == NULL)
			begin_list = list;
		list = list->next;
	}
	if ((close(fd)) == -1)
		begin_list = ft_create_elem("Close() error\n");
	return (begin_list);
}
