/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:26:14 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/18 10:32:32 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*p1;
	const char		*p2;

	p1 = dst;
	p2 = src;
	while (n--)
	{
		if (*p2 == c)
		{
			*p1++ = *p2++;
			return (p1);
		}
		*p1++ = *p2++;
	}
	return (NULL);
}
