/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:56:27 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/06 14:07:41 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 && ft_isdigit(c))
		return (0);
	else
		return (1);
}