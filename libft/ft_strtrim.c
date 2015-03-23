/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 10:53:44 by qcocusse          #+#    #+#             */
/*   Updated: 2015/03/23 09:18:08 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*new;
	int			len;
	int			start;

	if (!s)
		return (NULL);
	start = 0;
	while (*s == '\n' || *s == ' ' || *s == '\t')
		s++;
	len = ft_strlen(s);
	new = ft_strnew(len - start);
	if (new == NULL)
		return (NULL);
	new = ft_strcpy(new, s);
	while (len-- >= 0)
	{
		if (s[len] == '\n' || s[len] == ' ' || s[len] == '\t')
			new[len] = 0;
		else
			break ;
	}
	return (new);
}
