/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:31:38 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/29 16:15:48 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;

	i = 0;
	p = (unsigned char *)s;
	if (s && n > 0)
	{
		while (i < n)
		{
			if (p[i] == (unsigned char)c)
				return ((void *)(p + i));
			i++;
		}
	}
	return (NULL);
}
