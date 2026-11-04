/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 01:08:20 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 16:32:27 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char    *src, size_t dstsize)
{
    size_t  i;
    size_t  dst_len;
    size_t  src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
    i = 0;    
    while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len); 
}
