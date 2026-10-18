/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:40:54 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/15 16:25:43 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_itoa(int n)
{
    char *str;
    int i;
    int nb;
    int len;

    len = 0;
    i = 0;
    nb = n;
    if(nb < 0)
    {
        i++;
        nb = -nb;
        n = -n;
        len++;
    }
    while(nb)
    {
        nb = nb / 10;
        len++;
    }
    str = malloc(len + 1);
   
    if(i)
        str[i - 1] = '-';
    
    while(len - i)
    {
        
        
        str[len - 1] = (n % 10) + '0';
        n = n / 10;
        len--;
    }
    
    return str;   
}

int main()
{
    char *str;
    //printf("%s\n", str);
    printf("res is : %s\n", ft_itoa(-332110));
    return 0;
}