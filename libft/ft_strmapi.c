/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 08:57:34 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/23 09:05:09 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = malloc(size + 1);
	str[size] = '\0';
	while (i < size)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
