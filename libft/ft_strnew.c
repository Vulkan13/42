/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 10:26:43 by qcocusse          #+#    #+#             */
/*   Updated: 2014/12/02 10:41:11 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = NULL;
	ptr = ft_memalloc(size + 1);
	if (size + 1)
	{
		if (ptr == NULL)
			return (NULL);
		else
			ft_bzero(ptr, size + 1);
	}
	return (ptr);
}
