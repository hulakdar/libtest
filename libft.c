/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamoza <skamoza@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:13:33 by skamoza           #+#    #+#             */
/*   Updated: 2017/11/08 18:44:41 by skamoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
  write(1, "libft\n", 6);
  //memset
  write(1, "memset\n", 7);
  void *ft_kek = (void *)malloc(15);
  char *ft_lol = (char *)ft_memset(ft_kek, 42, 15);
  write(1, ft_lol, 15);
  write(1, "\n", 1);

  //bzero
  write(1, "bzero\n", 6);
  ft_bzero(ft_kek, 15);
  ft_lol[10] = 'Z';
  ft_lol[11] = 'A';
  ft_bzero(ft_kek, 11);
  write(1, ft_lol, 15);
  write(1, "\n", 1);
  ft_lol[5] = 'k';
  ft_lol[6] = 'l';

  //memcpy
  write(1, "memcpy\n", 7);
  ft_kek = malloc(15);
  ft_bzero(ft_kek, 15);
  ft_kek = ft_memcpy(ft_kek, "kek\n", 4);
  write(1, ft_kek, 3);
  write(1, "\n", 1);

  //memccpy
  write(1, "memccpy\n", 8);
  char *ft_ft = (char *)ft_kek;
  ft_ft[7] = 's';
  ft_ft[8] = 'z';
  char *ft_lil = (char *)ft_memccpy(ft_kek, (void *)ft_lol, 'l', 15);
  write(1, ft_kek + 5, 2);
  write(1, "\n", 1);
  write(1, ft_lil, 2);
  write(1, "\n", 1);

  //memmove
  write(1, "memmove\n", 8);
  char *ft_lolkek = (char *)ft_memmove(ft_kek, "LOL KEK CHEBUREK?", 11);
  write(1, ft_lolkek, 12);
  write(1, "\n", 1);
  ft_kek = ft_memmove(ft_kek, "kek\n", 4);
  write(1, ft_kek, 3);
  write(1, "\n", 1);
  ft_kek = ft_memmove(ft_kek + 1, ft_kek, 3);
  write(1, ft_kek, 3);
  write(1, "\n", 1);
  ft_kek = ft_memmove(ft_kek, "kek\n", 4);
  ft_kek = ft_memmove(ft_kek, ft_kek + 1, 3);
  write(1, ft_kek, 3);
  write(1, "\n", 1);

  //memchr
  write(1, "memchr\n", 7);
  ft_lil = (char *)ft_memchr(ft_kek, 'C', 15);
  if (ft_lil)
    write(1, ft_lil, 3);
  else 
    write(1, "NULL", 4);
  ft_lil = (char *)ft_memchr(ft_kek, 'Z', 15);
  write(1, "\n", 1);
  if (ft_lil)
    write(1, ft_lil, 1);
  else 
    write(1, "NULL", 4);
  write(1, "\n", 1);

  //memcmp
  printf("memcmp %i %i %i\n", ft_memcmp("kek", "lol", 3), ft_memcmp("kek", "lol", 0), ft_memcmp("kek", "kea", 2));
  
  //strlen
  printf("strlen %lu %lu\n", ft_strlen(""), ft_strlen("kek"));

  //strdup
  printf("strdup %s %s \n", ft_strdup("kek"), ft_strdup(""));

  //strcpy
  printf("strcpy %s\n", ft_strcpy(ft_lol, "kek"));

  //strncpy
  write(1, "strncpy ", 10);
  printf("strncpy %s\n",ft_strncpy(ft_lol, "LOL", 2));
  write(1, ft_lol, 5);
  write(1, "\n", 1);
  write(1, "\n", 1);

  //strcat
  printf("strcat %s\n", ft_strcat(ft_lol, "LOL"));

  //strncat
  printf("strncat %s\n", ft_strncat(ft_lol, "KEKSIK", 3));

  //strlcat
  printf("strlcat %lu\n", ft_strlcat(ft_lol, "K", 15));
  printf("%s\n", ft_lol);
  printf("%lu\n", ft_strlcat(ft_lol, "KEKSIK", 15));
  printf("%s\n", ft_lol);

  //strchr
  printf("strchr %p\n", ft_strchr("KEKSIK", 15));
  printf("%s\n", ft_strchr("KEKSIK", 'S'));
  printf("%s\n", ft_strchr("KEKSIK", 'K'));

  //strrchr
  printf("strrchr %s\n", ft_strrchr("KEKSIK", 'K'));

  //strstr
  printf("strstr %s\n", ft_strstr("KEKSIK", "SI"));
  char *testik = ft_strstr("KSIK", "");
  printf("%s %s\n", testik == NULL ? "NULL" : "NOT NULL", testik);
  printf("%s\n", ft_strstr(NULL, "") == NULL ? "NULL" : "NOT NULL");

  //strnstr
  testik = ft_strnstr("KEKSIK", "", 10);
  printf("strnstr\n1%s %s\n", testik == NULL ? "NULL" : "NOT NULL", testik);
  printf("2%s\n", ft_strnstr("KEKSIK", "I", 3) == NULL ? "NULL" : "NOT NULL");
  printf("3%s\n", ft_strnstr("KEKSIK", "I", 7));
  printf("4%s\n", ft_strnstr("KEKSIK", "lI", 7) == NULL ? "NULL" : "NOT NULL");
  printf("5%s\n", ft_strnstr("KEKSIK", "K", 7));
  printf("6%s\n", ft_strnstr("KEKSIK", "E", 0));

  //strcmp
  printf("strcmp\n%i\n", ft_strcmp("KEKSIK", "lrrI"));
  printf("%i\n", ft_strcmp("KEKSIK", ""));
  printf("%i\n", ft_strcmp("KEKSIK", "KEKSIKS"));
  printf("%i\n", ft_strcmp("KEKSIK", "KEKSIK"));

  //strncmp
  printf("strncmp\n%i\n", ft_strncmp("KEKSIK", "lrrI", 20));
  printf("%i\n", ft_strncmp("KEKSIK", "lrrI", 5));
  printf("%i\n", ft_strncmp("KEKSIK", "KEKS", 4));
  printf("%i\n", ft_strncmp("KEKSIK", "KEKJELOL", 3));
  printf("%i\n", ft_strncmp("KEKSIK", "KEKJELOL", 1));
  printf("%i\n", ft_strncmp("", "", 10));
  printf("%i\n", ft_strncmp("i", "", 1));

  //atoi
  printf("atoi %i %i %i %i\n%i\n%i\n", ft_atoi("                      KEKSIK12"), ft_atoi("              LEKJELOL-1"), ft_atoi("                     -1"), ft_atoi(""), ft_atoi("-2147483648"), ft_atoi("2147483648"));
}
