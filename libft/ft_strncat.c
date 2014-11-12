/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:31:06 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/12 15:44:16 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*ptr;

	ptr = dst;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && n != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dst);
}
