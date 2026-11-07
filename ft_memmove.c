/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:36:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/06 16:20:42 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
