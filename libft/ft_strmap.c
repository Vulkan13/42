/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 08:48:49 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/23 09:04:56 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = malloc(size + 1);
	str[size] = '\0';
	while (i < size)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
