/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:55:04 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/03 10:32:23 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char add_index(unsigned i, char c)
{
    return c + i;
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *result;
    unsigned int i;

    result = malloc(ft_strlen(s) + 1);
    if(!result)
        return NULL;
    i = 0;
    while(s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}

int main()
{
    printf("res is : %s\n", ft_strmapi("test", add_index));
    return 0;
}