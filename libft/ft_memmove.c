/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 08:29:02 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/18 08:31:50 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)malloc (sizeof(*str) * n);
	ft_memcpy (str, src, n);
	ft_memcpy (dst, str, n);
	free (str);
	return (dst);
}
