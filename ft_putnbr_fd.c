/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:18:49 by kamenzou          #+#    #+#             */
/*   Updated: 2026/10/16 14:21:29 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char    c;
    
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if(n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if(n < 10)
    {
        c = n + '0';
        write(fd, &c, 1);
        return;
    }
    ft_putnbr_fd(n / 10, fd);
    c = (n % 10) + '0';
    write(fd, &c, 1);
}

int main()
{
    ft_putnbr_fd(-2147483648, 1);
    return 0;
}