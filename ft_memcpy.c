/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:24:46 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/13 12:33:44 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    size_t i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

int main()
{
    char dest[10];
    ft_memcpy(dest, "khalid", 6);
    printf("%s\n", dest);
    return 0;
    
}