/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:46:49 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/17 19:43:22 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;
    t_list *list;

    list = *lst;
    while(list)
    {
        next = lst->next;
        ft_lstdelone(lst, del);
        list = next;
    }
    *lst = NULL;
}