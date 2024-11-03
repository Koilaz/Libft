/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:05:49 by lmarck            #+#    #+#             */
/*   Updated: 2024/11/02 14:38:13 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = (t_list *)malloc(sizeof(t_list));
	if (first == NULL)
		return (NULL);
	first->content = (void *)content;
	first->next = NULL;
	return (first);
}

/*int main()
{
	char *str = "Do not the cat";
	t_list *list;
	list = ft_lstnew((void *)str);
	printf("list content:\n%s\n", (char *)list->content);
	if (list->next == NULL)
		printf("Next pointe vers NULL");
	return (0);
}*/
