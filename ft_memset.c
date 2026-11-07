/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:31:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/06 16:21:01 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			x;

	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		ptr[x] = val;
		x++;
	}
	return (s);
}
