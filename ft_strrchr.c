/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:10:02 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/07 17:19:36 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len != 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[s_len]);
	return (NULL);
}
