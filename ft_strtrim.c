/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:52:24 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 17:28:47 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int in_set(char c, char const *set)
{
    int set_count = 0;
    int i = 0;
    int j = 0;
    
    while(set[j])
    {
        if(c == set[j])
            set_count++;
        j++;
    }

    return set_count;
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int set_count = 0;
    int i = 0;
    int j = 0;
    
    while(s1[i])
    {
        j = 0;
        while(set[j])
        {
            if(s1[i] == set[j])
                set_count++;
            j++;
        }
        i++;
    }
    char *trimstr = malloc(ft_strlen(s1) - set_count);
    i = 0;
    j = 0;
    while(s1[i])
    {
        if(in_set(s1[i], set))
        {
            i++;
        }
        else
        {
            trimstr[j] = s1[i];
            j++;
            i++;
        }
    }
    return trimstr;
}

int main()
{
    printf("%d\n", ft_strlen("khalid"));
    printf("%s\n", ft_strtrim("khalid", "ad"));
}