#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", &a);
    printf("Gia tri cua a: %d\n", *ptr);
    printf("Dia chi cua a: %p\n", ptr);

    return 0;
}