/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamoza <skamoza@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:36:51 by skamoza           #+#    #+#             */
/*   Updated: 2017/10/30 15:51:38 by skamoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

static void  ft_iter(unsigned int kek, char *s)
{
  if (kek % 2)
    write(1, s, 1);
}

static void  ft_ter(char *s)
{
  char kek = ft_toupper(*s);
  write(1, &kek, 1);
}

static char  ft_tomap(char c)
{
  return ((char)ft_toupper((int)c));
}

static char  ft_tomapi(unsigned int n, char c)
{
  return (n % 2 ? (char)ft_toupper((int)c) : c);
}

int main(void)
{
	char hard = 1;



  char *str = ft_strnew(17);
  write(1, str, 17);
  ft_putendl("");
  ft_putendl(ft_strcpy(str, "LOL KEK CHEBUREK"));
  write(1, str, 16);
  ft_putendl("");
  ft_strclr(str);
  write(1, str, 17);
  ft_putendl("");
  ft_putendl(str);
  ft_strdel(&str);
  ft_putnbr((unsigned long)str);
  ft_putendl("");
  ft_striter("lol KEK\n", &ft_ter);
  if (hard)
  {
  	ft_striter("", &ft_ter);
  	ft_striter("", NULL);
  	ft_striter(NULL, &ft_ter);
  }
  ft_striteri("lol KEK cheBuReK!!?!?\n", &ft_iter);
  if (hard)
  {
  	ft_striteri("", &ft_iter);
    ft_striteri("", NULL);
    ft_striteri(NULL, &ft_iter);
  }
  char *mstr = ft_strmap("kek lol L209**123!@#$ bom", &ft_tomap);
  ft_putendl(mstr);
  ft_strdel(&mstr);
  mstr = ft_strmapi("kek lol L209**123!@#$ bom", &ft_tomapi);
  ft_putendl(mstr);
  ft_strdel(&mstr);
  ft_putnbr(ft_strequ("", ""));
  ft_putnbr(ft_strequ("kek", "ke"));
  ft_putnbr(ft_strequ("lil", "lil"));
  ft_putnbr(ft_strnequ("", "", 2));
  ft_putnbr(ft_strnequ("", "", 0));
  ft_putnbr(ft_strnequ("kek", "ke", 3));
  ft_putnbr(ft_strnequ("kek", "ke", 2));
  ft_putnbr(ft_strnequ("lil", "lis", 2));
  ft_putendl("");
  ft_putnbr(INT_MAX);
  ft_putendl("");
  ft_putnbr(INT_MIN);
  ft_putendl("");
  char **arr = ft_strsplit("cccmem kek cccccchecccccccck lili LOL      bomcccc", 'c');
  int cunt = 0;
  while (arr[cunt])
  {
    ft_putendl(arr[cunt]);
    free(arr[cunt]);
    cunt++;
  }
  arr = ft_strsplit("      split       this for   me  !       ", ' ');
  cunt = 0;
  while (arr[cunt])
  {
    ft_putendl(arr[cunt]);
    free(arr[cunt]);
    cunt++;
  }
  ft_putendl(ft_itoa(228));
  ft_putendl(ft_itoa(INT_MAX));
  ft_putendl(ft_itoa(INT_MIN));
  ft_putendl(ft_strsub("KEK LOL CHE", 4, 3));
  ft_putendl(ft_strjoin("KEK LOL CHE", "BUREK"));
  ft_putendl(ft_strtrim("KEK LOL CHE          "));
  ft_putendl(ft_strtrim("   KEK LOL CHE          "));
  ft_putendl(ft_strtrim("HE"));
  ft_putendl(ft_strtrim(""));
}
