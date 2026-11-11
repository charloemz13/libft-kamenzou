/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:17 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/11 14:33:51 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*joinedstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	joinedstr = malloc(i + j + 1);
	if (!joinedstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joinedstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joinedstr[i + j] = s2[j];
		j++;
	}
	joinedstr[i + j] = '\0';
	return (joinedstr);
}
