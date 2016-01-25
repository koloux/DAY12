/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:02:20 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/25 16:40:03 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <stdio.h>

typedef struct			s_buffer_list
{
	char			*buffer;
	int			ret;
	int			error;
	struct s_buffer_list	*next;
}				t_buffer_list;

//lib
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_itoa_base(int value, int base);
char	*ft_strconcat(char *s1, char *s2);

//errors
char	*ft_error_elem(char *file_name);

//list
t_buffer_list	*ft_create_elem(char *buffer, int ret);
void		ft_create_list(char *file_name, t_buffer_list **begin_list);
void		ft_list_push_back(t_buffer_list **begin_list, char *buffer);

#endif
