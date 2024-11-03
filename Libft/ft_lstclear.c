/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:21:49 by lmarck            #+#    #+#             */
/*   Updated: 2024/11/03 16:25:02 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		list = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = list;
	}
	*lst = NULL;
}