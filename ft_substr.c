/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:08:20 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 16:38:09 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = malloc(len);
    size_t i;

    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return substr;
}
