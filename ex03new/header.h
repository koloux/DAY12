/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:02:20 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/01 19:34:13 by nhuber           ###   ########.fr       */
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
	char			*hex_buffer;
	char			*char_buffer;
	int			ret;
	int			error;
	struct s_buffer_list	*next;
}				t_buffer_list;

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_itoa_base(int value, int base);
int	ft_count_digit(int value, int base);
char	*ft_strconcat(char *s1, char *s2);
char	*ft_strcreatecpy(char *src);
int	ft_strcmp(char *s1, char *s2);
char	*ft_error_elem(char *file_name);
char	*ft_error_fd(char *file_name);
void	ft_bad_fd(t_buffer_list **begin_list, int ac, char **av);
void	ft_print_hexcount(int n);
void	ft_print(t_buffer_list *head, char **av);
void	ft_print_hex_buffer(char *hex_buffer);
void	ft_print_space(int elem_ret);
char	*ft_char_buffer(char *buffer);
void	ft_buffer_cpy(char *buffer, char *mod_buffer);
void	ft_star_elem(t_buffer_list **begin_list);
void	ft_same_line(t_buffer_list **begin_list);
t_buffer_list	*ft_create_elem(char *buffer, int ret);
void		ft_create_list(char *file_name, t_buffer_list **begin_list);
void		ft_list_push_back(t_buffer_list **begin_list, char *buffer);
void		ft_read(int fd, t_buffer_list **begin_list);

#endif
