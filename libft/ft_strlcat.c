/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:44:31 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/12 15:49:17 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lengdst;
	size_t		lengsrc;

	lengdst = ft_srtlen(dst);
	lengsrc = ft_strlen(src);
	if (size <= lengdst)
		return (size + lengsrc);
	if (lengsrc < size - lengdst)
	{
		ft_memcpy(dst + lengdst, src, lengsrc);
		dst += size - 1;
	}
	*dst = '\0';
	return (lengsrc + lengdst);
}
