/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 11:26:13 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/19 13:42:13 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countword(const char *s, char c)
{
	int			i;
	int			count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**ret;
	size_t		i;
	size_t		j;
	size_t		len;

	if (!s || !c)
		return (0);
	ret = ft_memalloc((ft_countword(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[len + i] && (s[i + len] != c))
				len++;
			ret[j++] = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	ret[j] = NULL;
	return (ret);
}
