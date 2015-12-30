/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:05:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/30 17:37:06 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_read(int fileds);
void	ft_intro(char *str);
void	ft_display_file(char *file_name, int option);
void	ft_putbuffer(char *buffer, int size, int option);
int		ft_c_option(char *option);
int		ft_file_size(char *file_name);
int		ft_display_error(int ac);
int		ft_atoi(char *str);

#endif
