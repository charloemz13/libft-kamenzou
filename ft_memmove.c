/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:36:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/13 22:24:40 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void *dest, void *src, size_t n)
{
    int i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    if (d == s || n == 0)
        return dest;
    if (d < s)
    {
        i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++; 
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dest;
}

int main()
{
    char dest[5];
    char *new_dest = ft_memmove(dest, "khali", 5);
    printf("%s\n", new_dest);
    printf("string after memmove is : %s\n", dest);
}