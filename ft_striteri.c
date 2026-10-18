/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:45:57 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/16 12:54:53 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    pass_index(unsigned int i, char *c)
{
    *c = *c + i;
}

void    *ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int main()
{
    char str[5] = "testt";
    ft_striteri(str, pass_index);
    printf("%s\n", str);
}