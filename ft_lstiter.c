/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:22:12 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/17 21:37:43 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *list_iter;
    
    list_iter = lst;
    while(list_iter)
    {
        list_iter->content = f(lst->content);
        list_iter = list_iter->next;
    }
}