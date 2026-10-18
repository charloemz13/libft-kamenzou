/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:17 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 15:51:40 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (s2[j])
        j++;
    char *joinedstr = malloc(i + j);
    i = 0;
    j = 0;
    while(s1[i])
    {
        joinedstr[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        joinedstr[i + j] = s2[j];
        j++;
    }
    return joinedstr;
}

int main()
{
    char *test = ft_strjoin("test", "ft");
    printf("res : %s\n", test);    
}