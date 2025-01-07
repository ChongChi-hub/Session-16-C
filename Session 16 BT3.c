#include <stdio.h>

void sum(int a, int b, int *result){
    *result = a + b;
}

int main()
{
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    int result;
    sum(a, b, &result);
    printf("Tong cua hai so la: %d", result);
    

    return 0;
}