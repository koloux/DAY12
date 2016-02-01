/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:11:38 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 19:37:12 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int	main(int ac, char **av)
{
	t_buffer_list *head;
	int i;
	int hex;

	i = (ft_strcmp(av[1], "-C") == 0) ? 2 : 1;
	hex = 0;
	head = NULL;
	while (i < ac)
	{
		ft_create_list(av[i], &head);
		i++;
	}
	ft_bad_fd(&head, ac, av);
	ft_star_elem(&head);
	ft_same_line(&head);
	ft_print(head, av);
	return (0);
}
