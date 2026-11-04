/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:31:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 16:29:06 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    unsigned char val = (unsigned char)c;
    size_t x = 0;
    while(x < n)
    {
        ptr[x] = val;
        x++;
    }
    return s;
}
