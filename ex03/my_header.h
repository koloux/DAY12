/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:05:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/21 13:54:34 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

typedef struct	s_list
{
	char		*str;
	struct s_list	*next;
}		t_list;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_print_hexcount(int n);
int	ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_itoa_base(int value, int base);

t_list	*ft_create_elem(char *str);
void	ft_create_buffer_list(char *file_name, t_list *begin_list);

#endif
