/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student@42 <@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:43:06 by student@42        #+#    #+#             */
/*   Updated: 2014/11/29 14:14:12 by qcocusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Salut la nouvelle promo merci de lire README.md et bon courage tout le monde
 *
 *https://github.com/QuentinPerez
 *https://github.com/mfontain
 *https://github.com/alex8092
 *https://github.com/gabtoubl
 *https://github.com/soyel
 *https://github.com/stherman
 *
 */

/*
** author : qperez
** HardCore + strtrim + Fixes: mfontain
** Fixes strsplit, strequ: gabtoubl
** Fixes strsplit, strjoin, strsub, strtrim, itoa, strequ, strnequ: stherman
**
** Any segfault ? Probably caused by a NULL test. ex : ft_memset(NULL, 0, 0);
*/

#include  <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#include  "libft.h" /* compile with -I./ */

#define D_ERROR{ printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }
#define D_ADD_HCTEST(name)uf_add_test(test, "\033[33m"#name"\033[0m", uf_test_##name);
#define D_ADD_TEST(name)uf_add_test(test, #name, uf_test_##name);
#define D_TEST60
#define RANDT512
#define LONG10000

intuf_test_strtrim(void);
intuf_test_strsplit(void);
intuf_test_strjoin(void);
intuf_test_strsub(void);
intuf_test_itoa(void);
intuf_test_strnequ(void);
intuf_test_strequ(void);
intuf_test_strmapi(void);
intuf_test_strmap(void);
intuf_test_striteri(void);
intuf_test_striter(void);
intuf_test_strclr(void);
intuf_test_strdel(void);
intuf_test_strnew(void);
intuf_test_memalloc_and_del(void);
intuf_test_tolower(void);
intuf_test_toupper(void);
intuf_test_isprint(void);
intuf_test_isascii(void);
intuf_test_isalnum(void);
intuf_test_isdigit(void);
intuf_test_isalpha(void);
intuf_test_atoi(void);
intuf_test_strncmp(void);
intuf_test_strcmp(void);
intuf_test_strnstr(void);
intuf_test_strstr(void);
intuf_test_strrchr(void);
intuf_test_strchr(void);
intuf_test_strlcat(void);
intuf_test_strncat(void);
intuf_test_strcat(void);
intuf_test_strncpy(void);
intuf_test_strcpy(void);
intuf_test_strdup(void);
intuf_test_strlen(void);
intuf_test_memmove(void);
intuf_test_memchr(void);
intuf_test_memcmp(void);
intuf_test_memccpy(void);
intuf_test_memcpy(void);
intuf_test_memset(void);
intuf_test_bzero(void);
intuf_test_lstnew(void);
intuf_test_lstdelone(void);
intuf_test_lstdel(void);
intuf_test_lstadd(void);
intuf_test_lstiter(void);
int uf_test_lstmap(void);

typedef structs_test
{
	const char*name;
	int(*funct)(void);
	boolset;
}t_test;

voiduf_add_test(t_test *test, const char *name, int (*funct)(void))
{
	static inti = 0;

	test[i].name = name;
	test[i].funct = funct;
	test[i].set = true;
	test[i + 1].set = false;
	i = i + 1;
}


intmain(int argc, const char **argv)
{
	inti;
	t_testtest[D_TEST];

	srand(time(NULL));
	printf("[\033[33mYellow Tests\033[0m] are Hardcore\n");
	i = 0;
	memset(test, 0, D_TEST);
	/*
	 * Si vous n'avez pas la fonction il suffit de mettre en commentaire
	 */
	/*
	 * Example : vous n'avez pas memset vous commentez
	 * // #define D_MEMSET
	 * // D_ADD_TEST(...)
	 */
#defineD_MEMSET
	D_ADD_HCTEST(memset);
#defineD_BZERO
	D_ADD_HCTEST(bzero);
#defineD_MEMCPY
	D_ADD_HCTEST(memcpy);
#defineD_MEMCCPY
	D_ADD_HCTEST(memccpy);
#defineD_MEMMOVE
	D_ADD_HCTEST(memmove);
#defineD_MEMCHR
	D_ADD_HCTEST(memchr);
#defineD_MEMCMP
	D_ADD_HCTEST(memcmp);
#defineD_STRLEN
	D_ADD_TEST(strlen);
#defineD_STRDUP
	D_ADD_TEST(strdup);
#defineD_STRCPY
	D_ADD_HCTEST(strcpy);
#defineD_STRNCPY
	D_ADD_HCTEST(strncpy);
#defineD_STRCAT
	D_ADD_TEST(strcat);
#defineD_STRNCAT
	D_ADD_TEST(strncat);
//#defineD_STRLCAT
//D_ADD_TEST(strlcat);
#defineD_STRCHR
	D_ADD_TEST(strchr);
#defineD_STRRCHR
	D_ADD_TEST(strrchr);
#defineD_STRSTR
	D_ADD_TEST(strstr);
//#defineD_STRDEL
	D_ADD_TEST(strdel);
#defineD_STRCLR
	D_ADD_TEST(strclr);
#defineD_STRITER
	D_ADD_TEST(striter);
#defineD_STRITERI
	D_ADD_TEST(striteri);
#defineD_STRMAP
	D_ADD_TEST(strmap);
#defineD_STRMAPI
	D_ADD_TEST(strmapi);
#defineD_STREQU
	D
		(void)s;
}

/*
** Thx pmotte for the test
*/

#ifdef  D_LSTMAP

t_list*uf_testmap(t_lisbub"))
D_ERROR;
if (!strcmp((const char *) lst->next(1);
}
#endif

#ifdefD_LSTDELONE
intuf_test_lstdelone(void)
{
t_list*begin;
size_tv;

v = 1;
begin = ft_lstnew(&v, sizeof(void *));
begin->free(begin);
begin = ft_lstnew(&v, sizeof(size_t));
if (begin != NULL)
{
if (&v == begin->content)
D_ERROR;
if (*(size_t*)begin->content != 1)
D_ERROR;
if (be|| (str2 == r))
{
printf("Error Line %d, Funct %s : \n\033[1;31mft_strstrim(\"Bonjour
														  ret = ft_strsplit("*********", '*');
														  if (ret == NULL || ret[0] != NULL)
														  {
															  printf("Error Line %d, Funct %s : \
\nYour function has return NULL or the first pointer iULL && strcmp(ret[0], "hello") != 0)
{
printf("Error Line %d, Funct %s : \n\033[1;31mft_strsplit(\"*hello\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NUreturn (0);
										 }
																	 ret = ft_strsplit("*hel*lo*", '*');
																	 if (ret\"\033[0m\n", __LINE__ - 2, __func__, ret[\033[0m\n", __LINE__ - 2, __func__);
//return (0);
//}
																		 ret = ft_strsplit("***hel**) != 0)
{
D_ERRmp(ret = ft_itoa(0), "0") != 0)
{
printf("Error Line %d, Funct %s : \n\033[1;31mft_itoa(0).\nExpected ret = \"0\" \
										 but have ret = \"%s\"\033[0m\n", __LIN(214741mft_strnequ(\"abc\", \"cba\", 2).\nExpectedet = \"%d\"\033[0m\n", __LINE__ -strequ("abcd", "abc"teri(NULL, NULL);
																																										 ft_striteri(str, NULL);
																																										 ft_striteri(str
																																													 }
																																										 }
																   return (1);
																   }(i))
																						   D_ERROR
																						   i = i + 1;
																						   }if (atoi(" - bc", 2) != a)
																			 D_ERROR;
																		 #"abc", "cbatr, "w"))
D_E, 'x') != fn original by mfontain
 */

#ifo ");| ft_strcpy(ctab3, ctarstR
																	 intuf_test_memc= (unsigned long)rand(mp2;
																										  b));
																	 b, (k < sizeof(itab)),LL, 0);
															  ft_bzero(NUL
