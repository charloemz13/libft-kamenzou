/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:17 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/04 18:17:44 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (s1[i])
                i++;
        while (s2[j])
                j++;
        char *joinedstr = malloc(i + j);
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
        return (joinedstr);
}
