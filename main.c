/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:01:31 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 17:15:19 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    t_list *header = NULL;
    t_list *node = ft_lstnew("hello");
    t_list *node1 = ft_lstnew("hello a zebi");
    ft_lstadd_back(&header, node);
    ft_lstadd_back(&header, node1);
    while(header)
    {
        ft_putstr_fd(header->content, 1);
        ft_putstr_fd("\n", 1);
        header= header->next;   
    }
    return 0;
}