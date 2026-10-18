/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:58:32 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/16 22:12:25 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *list = *lst;
    t_list *last;
    while(list)
    {
        last = list;
        list = list->next;
    }
    last->next = new;
}