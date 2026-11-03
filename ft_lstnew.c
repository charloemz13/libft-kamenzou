/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:22:54 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/03 10:34:20 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *newList = (t_list *)malloc(sizeof(t_list));
    if(!newList)
        return NULL;
    newList->content = content;
    newList->next = NULL;
    return newList;
}

/*int main()
{
    int nbr = 12;
    t_list *list = ft_lstnew(&nbr);
    printf("%d",*(int *)(list->content));
}*/