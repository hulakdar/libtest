/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ischeck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamoza <skamoza@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 06:28:12 by skamoza           #+#    #+#             */
/*   Updated: 2017/11/02 12:44:57 by skamoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  int cunt = 0;
  while (cunt < 262)
  {
    if (isalpha(cunt) != ft_isalpha(cunt) && printf("isalpha: %i %i %i \n", cunt, isalpha(cunt), ft_isalpha(cunt)))
      return (1);

    if (isdigit(cunt) != ft_isdigit(cunt) && printf("isdigit: %i %i %i \n", cunt, isdigit(cunt), ft_isdigit(cunt)))
      return (1);

    if (isprint(cunt) != ft_isprint(cunt) && printf("isprint: %i %i %i \n", cunt, isprint(cunt), ft_isprint(cunt)))
      return (1);

    if (isalnum(cunt) != ft_isalnum(cunt) && printf("isalnum: %i %i %i \n", cunt, isalnum(cunt), ft_isalnum(cunt)))
      return (1);

    if (isascii(cunt) != ft_isascii(cunt) && printf("isascii: %i %i %i \n", cunt, isascii(cunt), ft_isascii(cunt)))
      return (1);

    if (toupper(cunt) != ft_toupper(cunt) && printf("toupper: %i %i %i \n", cunt, toupper(cunt), ft_toupper(cunt)))
      return (1);

    if (tolower(cunt) != ft_tolower(cunt) && printf("tolower: %i %i %i \n", cunt, tolower(cunt), ft_tolower(cunt)))
      return (1);

    cunt++;
  }
	char *str = ft_strdup("   -22");
	for (int i = 0; i < 256; i++)
	{
		str[0] = (unsigned char)i;

		if (ft_atoi(str) != atoi(str))
		{
			printf("Ai ai ai. %i\n", i);
			return (1);
		}
	}
	free(str);

	str = (ft_strdup("9223372036854775809"));
		printf("%i %i\n", atoi(str), ft_atoi(str));
	free(str);
	str = (ft_strdup("22222222222222222222222229223372036854775809"));
	for (int i = ft_strlen(str); i > 0; i--)
	{
		str[i] = 0;
		if (ft_atoi(str) != atoi(str))
		{
			printf("Ai ai ai. %i\n", i);
			printf("len: %i str:%s ft:%i c:%i\n", i, str, ft_atoi(str), atoi(str));
			return (0);
		}
	}
}
