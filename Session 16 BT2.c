#include <stdio.h>


void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("Truoc khi doi 2 gia tri bien voi nhau: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("Sau khi doi 2 gia tri bien voi nhau: a = %d, b = %d", a, b);
	return 0;
}