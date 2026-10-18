/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:10:02 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/14 11:21:03 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *str, int character)
{
    int len = 0;
    char *ptr = (char *)str;
    int i = 0;

    while(str[len])
        len++;
    while (len)
    {
        if (*(ptr + len) == character)
            return (ptr + len);
        len--;
    }
    return NULL;
}

int main()
{
    char *text = ft_strrchr("khaliad", 'a');
    printf("text is : %s\n", text);
}
