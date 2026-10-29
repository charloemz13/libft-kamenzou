/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:25:36 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/29 12:19:25 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char   *ptr;
    size_t          total;
    size_t          i;

    if (count != 0 && size > ((size_t)-1) / count)
        return (NULL);
    total = count * size;
    if (total == 0)
        total = 1;
    ptr = (unsigned char *)malloc(total);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < total)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}
