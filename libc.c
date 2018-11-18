/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamoza <skamoza@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:13:33 by skamoza           #+#    #+#             */
/*   Updated: 2017/11/11 13:46:58 by skamoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  write(1, "libft\n", 6);
  //memset
  write(1, "memset\n", 7);
  void *kek = (void *)malloc(15);
  char *lol = (char *)memset(kek, 42, 15);
  write(1, lol, 15);
  write(1, "\n", 1);

  //bzero
  write(1, "bzero\n", 6);
  bzero(kek, 15);
  lol[10] = 'Z';
  lol[11] = 'A';
  bzero(kek, 11);
  write(1, lol, 15);
  write(1, "\n", 1);
  lol[5] = 'k';
  lol[6] = 'l';

  //memcpy
  write(1, "memcpy\n", 7);
  kek = malloc(15);
  bzero(kek, 15);
  kek = memcpy(kek, "kek\n", 4);
  write(1, kek, 3);
  write(1, "\n", 1);

  //memccpy
  write(1, "memccpy\n", 8);
  char *ft = (char *)kek;
  ft[7] = 's';
  ft[8] = 'z';
  char *lil = (char *)memccpy(kek, (void *)lol, 'l', 15);
  write(1, kek + 5, 2);
  write(1, "\n", 1);
  write(1, lil, 2);
  write(1, "\n", 1);

  //memmove
  write(1, "memmove\n", 8);
  char *lolkek = (char *)memmove(kek, "LOL KEK CHEBUREK?", 11);
  write(1, lolkek, 12);
  write(1, "\n", 1);
  kek = memmove(kek, "kek\n", 4);
  write(1, kek, 3);
  write(1, "\n", 1);
  kek = memmove(kek + 1, kek, 3);
  write(1, kek, 3);
  write(1, "\n", 1);
  kek = memmove(kek, "kek\n", 4);
  kek = memmove(kek, kek + 1, 3);
  write(1, kek, 3);
  write(1, "\n", 1);

  //memchr
  write(1, "memchr\n", 7);
  lil = (char *)memchr(kek, 'C', 15);
  if (lil)
    write(1, lil, 3);
  else 
    write(1, "NULL", 4);
  write(1, "\n", 1);
  lil = (char *)memchr(kek, 'Z', 15);
  if (lil)
    write(1, lil, 1);
  else 
    write(1, "NULL", 4);
  write(1, "\n", 1);

  //memcmp
  printf("memcmp %i %i %i\n", memcmp("kek", "lol", 3), memcmp("kek", "lol", 0), memcmp("kek", "kea", 2));
  
  //strlen
  printf("strlen %lu %lu\n", strlen(""), strlen("kek"));

  //strdup
  printf("strdup %s %s \n", strdup("kek"), strdup(""));

  //strcpy
  printf("strcpy %s\n", strcpy(lol, "kek"));

  //strncpy
  write(1, "strncpy ", 10);
  printf("strncpy %s\n", strncpy(lol, "LOL", 2));
  write(1, lol, 5);
  write(1, "\n", 1);
  write(1, "\n", 1);

  //strcat
  printf("strcat %s\n", strcat(lol, "LOL"));

  //strncat
  printf("strncat %s\n", strncat(lol, "KEKSIK", 3));

  //strlcat
  printf("strlcat %lu\n", strlcat(lol, "K", 15));
  printf("%s\n", lol);
  printf("%lu\n", strlcat(lol, "KEKSIK", 15));
  printf("%s\n", lol);

  //strchr
  printf("strchr %p\n", strchr("KEKSIK", 15));
  printf("%s\n", strchr("KEKSIK", 'S'));
  printf("%s\n", strchr("KEKSIK", 'K'));

  //strrchr
  printf("strrchr %s\n", strrchr("KEKSIK", 'K'));

  //strstr
  printf("strstr %s\n", strstr("KEKSIK", "SI"));
  char *testik = strstr("KSIK", "");
  printf("%s %s\n", testik == NULL ? "NULL" : "NOT NULL", testik);
  printf("%s\n", strstr(NULL, "") == NULL ? "NULL" : "NOT NULL");

  //strnstr
  testik = strnstr("KEKSIK", "", 10);
  printf("strnstr\n1%s %s\n", testik == NULL ? "NULL" : "NOT NULL", testik);
  printf("2%s\n", strnstr("KEKSIK", "I", 4) == NULL ? "NULL" : "NOT NULL");
  printf("3%s\n", strnstr("KEKSIK", "I", 7));
  printf("4%s\n", strnstr("KEKSIK", "lI", 7) == NULL ? "NULL" : "NOT NULL");
  printf("5%s\n", strnstr("KEKSIK", "K", 7));
  printf("6%s\n", strnstr("KEKSIK", "E", 0));

  //strcmp
  printf("strcmp\n%i\n", strcmp("KEKSIK", "lrrI"));
  printf("%i\n", strcmp("KEKSIK", ""));
  printf("%i\n", strcmp("KEKSIK", "KEKSIKS"));
  printf("%i\n", strcmp("KEKSIK", "KEKSIK"));

  //strncmp
  printf("strncmp\n%i\n", strncmp("KEKSIK", "lrrI", 20));
  printf("%i\n", strncmp("KEKSIK", "lrrI", 5));
  printf("%i\n", strncmp("KEKSIK", "KEKS", 4));
  printf("%i\n", strncmp("KEKSIK", "KEKJELOL", 3));
  printf("%i\n", strncmp("KEKSIK", "KEKJELOL", 1));
  printf("%i\n", strncmp("", "", 10));
  printf("%i\n", strncmp("i", "", 1));

  //atoi
  printf("atoi %i %i %i %i\n%i\n%i\n", atoi("                      KEKSIK12"), atoi("              LEKJELOL-1"), atoi("                     -1"), atoi(""), atoi("-2147483648"), atoi("2147483648"));
}
