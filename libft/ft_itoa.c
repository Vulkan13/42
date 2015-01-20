/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 14:42:04 by qcocusse          #+#    #+#             */
/*   Updated: 2015/01/19 17:03:51 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int		i;

	i = 0;
	while (n > 9 || n < 0)
	{
		i ++;
		n /= 10;
	}
	i ++;
	return (i);
}

static char		ft_fill(int n, char *s, int i)
{
	int		temp;
	int		modulo;

	modulo = 10;
	temp = 1;
	while (temp != 0)
	{
		temp = n % modulo;
		if (temp < 0)
			s[i] = (temp * (-1)) + '0';
		else
			s[i] = temp + '0';
		i --;
		n /= 10;
	}
	s[i]='\0';
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		temp;
	
	s = NULL;
	i = 0;
	temp = 0;
	if (n < 0)
		temp += 1;
	if (n == 0)
	{
		s = malloc(2);
		s[1] = 0;
		s[2] = '\0';
		return (s);
	}
	i = ft_count(n);
	s = malloc(i + 1 + temp);
	i += temp;
	s = ft_fill(n, s, i);
	if (temp == 1)
		s[0] = '-';
	return (s);
}
