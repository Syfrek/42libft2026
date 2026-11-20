/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 12:04:23 by racornu           #+#    #+#             */
/*   Updated: 2026-11-12 12:04:23 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*second;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		content = f(lst->content);
		second = ft_lstnew(content);
		if (!second)
		{
			del(content);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, second);
		lst = lst->next;
	}
	return (first);
}
