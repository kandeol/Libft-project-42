/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:07:12 by kandeol           #+#    #+#             */
/*   Updated: 2017/12/21 19:29:04 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_read_size(int fd)
{
	size_t		size;
	char		buff[1];

	size = 0;
	while (read(fd, &buff, 1) > 0)
		size++;
	if (size == 0)
		return (0);
	return (size);
}
