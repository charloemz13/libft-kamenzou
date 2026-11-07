/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:27:05 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/07 17:11:43 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[h] && h < len)
	{
		n = 0;
		while (little[n] && (h + n) < len && big[h + n] == little[n])
			n++;
		if (!little[n])
			return ((char *)big + h);
		h++;
	}
	return (NULL);
}
