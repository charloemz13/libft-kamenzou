/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:40:54 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/06 15:30:53 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nb)
{
	int	len;

	len = 1;
	while (nb / 10 >= 1)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

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
	len = ft_intlen(nb);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
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
