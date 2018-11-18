/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   third.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamoza <skamoza@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 11:26:24 by skamoza           #+#    #+#             */
/*   Updated: 2017/10/30 20:47:14 by skamoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(void *content, size_t content_size)
{
	if (content_size)
		free(content);
	else
		free(content);
}

void	ft_lstendl(t_list *ptr)
{
	write(1, ptr->content, ptr->content_size - 1);
	write(1,"\n", 1);
}

t_list	*ft_lsttomap(t_list *lst)
{
	return (lst);
}

int   main(void)
{
  t_list *list = ft_lstnew("kek", 4);
  ft_lstadd(&list, ft_lstnew("lol", 4));
  ft_lstiter(list, &ft_lstendl);
  t_list *tmp = list;
  list = list->next;
  ft_lstdelone(&tmp, &ft_lstfree);
  ft_lstadd(&list, ft_lstnew("1", 2));
  ft_lstadd(&list, ft_lstnew("2", 2));
  ft_lstadd(&list, ft_lstnew("3", 2));
  ft_lstadd(&list, ft_lstnew("4", 2));
  ft_lstadd(&list, ft_lstnew("5", 2));
  ft_lstadd(&list, ft_lstnew("6", 2));
  ft_lstadd(&list, ft_lstnew("7", 2));
  ft_lstadd(&list, ft_lstnew("8", 2));
  ft_lstiter(list, &ft_lstendl);
  t_list *tmp2 = ft_lstmap(list, &ft_lsttomap);
  ft_lstiter(tmp2, &ft_lstendl);
  ft_lstdel(&tmp2, &ft_lstfree);
  ft_lstiter(list, &ft_lstendl);
  if (tmp2)
	  ft_putendl("KO");
  else
	  ft_putendl("OK");
}
