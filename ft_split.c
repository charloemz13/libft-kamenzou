/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:08:29 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/15 15:40:20 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    char **results = malloc(sizeof(char *) * 1024);
    int i = 0;
    int z = 0;
    int y = 0;
    int j;

    while(s[i])
    {
        j = 0;
        y = 0;
        while(s[i] == c && s[i])
            i++;
        results[z] = malloc(1024);
        while (s[i] != c && s[i])
        {
            results[z][y] = s[i];
            i++;
            y++;
        }
        i++;
        z++;
    }
    results[z] = NULL;
    return results;
}

int main()
{
    char **res = ft_split("   my gf is a goatt   \0", ' ');
    int i = 0;
    while(res[i])
    {
        printf("res %d is : %s\n", i, res[i]);
        i++;
    }     
}
