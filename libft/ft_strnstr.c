/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 13:39:03 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/25 13:52:15 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2 == NULL || s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && i < (int)n)
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		if (s2[j] == '\0')
			return ((char *)s1 + (i - (j - 1)));
		i++;
	}
	return (NULL);
}
