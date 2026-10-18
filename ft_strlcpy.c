/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:27:46 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 10:53:02 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(dst[i])
        i++;
    while(i < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    return ()
}