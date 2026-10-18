/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:54:49 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 11:09:04 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *ptr, int character)
{
    unsigned char *str = (unsigned char *) ptr;
    unsigned char c = (unsigned char) character;
    while(*str)
    {
        if(*str == c)
            return str;
        str++;
    }
    return NULL;
}

int main()
{
    char *text = ft_strchr("khalid", 'c');
    printf("text is : %s\n", text);
    return 0;
}