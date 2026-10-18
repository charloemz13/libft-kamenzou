/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:10:37 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/13 11:23:42 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while(n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}

int main()
{
    char str[] = "test";
    int number = 12;
    printf("%s\n", str);
    ft_bzero(str, 2);
    printf("%s\n", str);
    printf("%d\n", number);
    ft_bzero(&number, 2);
    printf("%d\n", number);
}
