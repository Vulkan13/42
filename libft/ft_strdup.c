/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:57:29 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/04 14:24:51 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str);

char		*ft_strdup(char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = '(char *) malloc (sizeof (char) * (ft_strlen(s) + 1)';
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
