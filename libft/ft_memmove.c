/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 08:29:02 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/29 14:54:42 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstsec;
	char	*srcsec;

	dstsec = dst;
	srcsec = (void *)src;
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	while (n)
	{
		n--;
		dstsec[n] = srcsec[n];
	}
	return (dst);
}
