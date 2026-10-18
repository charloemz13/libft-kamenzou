/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:44:22 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/16 21:49:49 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while(lst)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}
