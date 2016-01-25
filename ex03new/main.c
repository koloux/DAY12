/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:11:38 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/25 16:39:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int	main(int ac, char **av)
{
	(void)ac;
	t_buffer_list *head;
	int i;

	i = 1;
	head = NULL;
	while (i < ac)
	{
		ft_create_list(av[i], &head);
		ft_putstr(head->buffer);
		i++;
	}
	return (0);
}
