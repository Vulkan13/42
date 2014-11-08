/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:13:24 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/04 14:13:25 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	int		total;
	int		nb;

	i = 1;
	total = str[0] - '0';
	while (str[i])
	{
		total *= 10;
		nb = str[i] - '0';
		i++;
	}
	return (total);
}
