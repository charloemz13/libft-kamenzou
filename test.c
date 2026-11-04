#include "libft.h"
#include <stdio.h>
int main()
{
    struct test{
        int *p;
        char a;
        char d;char c;
        int b;
        
    };
printf("%zu\n", sizeof(struct test));
}#define NULL (void *)0