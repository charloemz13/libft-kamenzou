/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:55:16 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/17 20:05:00 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
    free(content);
}

int main()
{
    int number = 12;
    int number2 = 10;
    int number3 = 33;
    t_list *lst = ft_lstnew(&number);
    t_list *new = ft_lstnew(&number2);
    t_list *new_last = ft_lstnew(&number3);
   
    printf("adres od lst bfr : %p\n", lst);
    printf("adres od new bfr : %p\n", new);
    ft_lstadd_front(&lst, new);
    t_list *list_iter = lst;
    printf("adres od lst : %p\n", lst);
    printf("adres od new : %p\n", new);
    ft_lstadd_back(&lst, new_last);
    while(list_iter)
    {
        printf("%d\n",*(int *)list_iter->content);
        printf("adres od list : %p\n", list_iter);
        list_iter = list_iter->next;       
        printf("adres od list aftr : %p\n", list_iter);
    }
    printf("size of list : %d\n", ft_lstsize(lst));
    printf("last node value : %d\n", *(int *)(ft_lstlast(lst)->content));

    char    *str1 = ft_strdup("hello");
    char    *str2 = ft_strdup("world");
    t_list *str_list = ft_lstnew(str1);
    t_list *str2_list = ft_lstnew(str2);
    ft_lstadd_back(&str_list, str2_list);
    t_list *next = str_list->next;
    ft_lstdelone(str_list, del);
    str_list = next;
    t_list *listiter = str_list;
    while(listiter)
    {
        printf("string is : %s\n", (char *)(listiter->content));
        listiter = listiter->next;
    }
}