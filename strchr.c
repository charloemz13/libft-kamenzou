/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:54:49 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/23 10:41:21 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)str);
        s++;
    }
    if ((unsigned char)c == 0)
        return ((char *)s);
    return (NULL);
}