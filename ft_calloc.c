/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:25:36 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/22 16:03:21 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr = malloc(count * size);
    size_t   total;
    
    if (count != 0 && size >  SIZE_MAX / count)
        return (NULL);
    total = count * size;
    ptr = malloc(total);
    if(!ptr)
        return (NULL);
    size_t i = 0;    
    while (i < total)
    {
        ptr[i] = 5;
        i++;
    }
    return ptr;
}

int main()
{
    int *str = ft_calloc(20, sizeof(int));
    
    //str = "khalid eating APPLE";
    printf("str is : %d\n", *str);
}