/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:21:52 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/12 15:27:15 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, const char *src)
{
	char	*ptr;

	ptr = dst;
	while (ptr && *ptr)
		ptr++;
	while (ptr && src && *src)
		*(ptr++) = *(src++);
	*ptr = '\0';
	return (dst);
}
