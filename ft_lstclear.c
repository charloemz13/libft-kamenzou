/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:46:49 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/29 12:58:01 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*list;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		next = list->next;
		ft_lstdelone(list, del);
		list = next;
	}
	*lst = NULL;
}
