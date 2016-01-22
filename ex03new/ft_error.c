/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:26:57 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/21 17:17:53 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_error_elem(char *file_name)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(file_name) + 37))))
		return (NULL);
	str = ft_strconcat("hexdump: ", file_name);
	str = ft_strconcat(str, ": No such file or directory");
	return (str);
}
