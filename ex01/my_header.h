/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:05:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/21 13:14:09 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE 29000

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_read(int fileds);
int		ft_display_error(int ac);
int		ft_open_n_error(char *file_name);
int		ft_strlen(char *str);

#endif
