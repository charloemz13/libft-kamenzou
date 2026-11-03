/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamenzou <kamenzou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:31:53 by kamenzou          #+#    #+#             */
/*   Updated: 2026/11/03 10:33:58 by kamenzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    unsigned char val = (unsigned char)c;
    int x = 0;
    while(x < n)
    {
        ptr[x] = val;
        x++;
    }
    return s;
}
int main()
{   
    char str[] = "salah";
    char test[] = "l7wa";

    int number = 12;
    void *ptr0 = &number;
    unsigned char *ptr = (unsigned char *)ptr0;
    ft_memset(ptr, 1, 4);
    printf("0x%02X\n", *ptr);
    
    // printf("%c\n", str[9]);
    // printf("%s\n",(char*)(ft_memset(str, 99, 6)));
    // printf("%c\n", ((char*)(ft_memset(str, 99, 6)))[6]);
    // printf("%c\n", ((char*)(ft_memset(str, 99, 6)))[7]);
}