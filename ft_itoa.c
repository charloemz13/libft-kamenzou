/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:40:54 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/29 12:38:51 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		sign;

	nb = n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	len = 1;
	while (nb / 10 >= 1)
	{
		nb = nb / 10;
		len++;
	}
	str = (char *)malloc(len + sign + 1);
	if (!str)
		return (NULL);
	nb = n;
	if (sign)
		nb = -nb;
	str[len + sign] = '\0';
	while (len--)
	{
		str[sign + len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
