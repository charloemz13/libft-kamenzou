/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:10:02 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 16:36:22 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int character)
{
    int len = 0;
    char *ptr = (char *)str;

    while(str[len])
        len++;
    while (len)
    {
        if (*(ptr + len) == character)
            return (ptr + len);
        len--;
    }
    return NULL;
}
