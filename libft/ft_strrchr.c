/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:18:49 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/12 15:29:57 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *) & s[i]);
	else
		return (NULL);
}
