/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 10:40:22 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/23 09:25:07 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	str = NULL;
	if (s && len)
	{
		str = malloc((len + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[len] = '\0';
		while (i != len && s[start])
		{
			str[i] = s[start];
			i++;
			start++;
		}
		return (str);
	}
	return (NULL);
}
