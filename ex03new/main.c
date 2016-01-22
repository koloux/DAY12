/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:11:38 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/22 15:19:09 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	(void)ac;
	t_buffer_list *head;

	head = NULL;
	ft_create_list(av[1], &head);
	ft_putstr(head->buffer);
	return (0);
}
