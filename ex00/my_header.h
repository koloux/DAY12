/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:05:37 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/25 12:35:40 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_HEADER_H
# define MY_HEADER_H
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_display_error(int ac);

#endif
