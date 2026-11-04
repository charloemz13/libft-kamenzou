/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:36:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 16:31:59 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest,const void *src, size_t n)
{
    size_t i;
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