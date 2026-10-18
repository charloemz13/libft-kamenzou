/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:08:20 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 15:18:16 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = malloc(len);
    int i;

    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return substr;
}

int main()
{
    char *sub = ft_substr("khalid", 2, 3);
    printf("sub is : %s\n", sub);
    return 0;
}