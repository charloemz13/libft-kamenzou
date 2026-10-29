/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:40:34 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/27 11:19:20 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list   *lst, void  *(*f)(void  *), void    (*del)(void *))
{
    t_list *new_lst;

    new_lst = lst;
    while (new_lst)
    {
        new_lst->content = f(lst->content);
        new_lst->next = lst->next;
        lst = lst->next;
        del(lst->content);
    }
    return new_lst;
}