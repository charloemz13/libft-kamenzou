/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:02:46 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/16 13:09:42 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void    ft_putstr_fd(char *s, int fd)
{
    while(*s)
    {
        write(fd, s, 1);
        s++;
    }
}

int main()
{
    char str[6] = "khalid";
    ft_putstr_fd(str, 1);
    printf("\n%s", str);
}