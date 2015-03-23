/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 10:45:40 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/23 09:13:36 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int			len;
	char		*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = NULL;
	if (s1 && s2)
	{
		str = malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		str[len] = '\0';
		ft_memcpy(str, s1, (ft_strlen(s1) + 1));
		ft_strcat(str, (char *)s2);
	}
	return (str);
}
