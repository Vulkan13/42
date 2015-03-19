/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 10:40:22 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/19 10:45:21 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = NULL;
	str = ft_strnew(len);
	if (str == NULL || start + len > ft_strlen(s))
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
			str[i - start} = s[i];
		i ++;
	}
	return (str);
}
