/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:08:28 by qcocusse          #+#    #+#             */
/*   Updated: 2014/11/08 13:00:22 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int 		ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_atoi(char *str);
int			ft_bzero(void *s, size_t n);

void		*ft_memset(void *s, int c, size_t n);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strcpy(char *s1, char *s2);
char		*ft_strdup(char *s);
int			ft_strlen(char *str);

#endif
