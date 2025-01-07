#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int size;
    printf("Nhap kich thuoc cho mang: ");
    scanf("%d", &size);
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    printf("Vui long nhap mang: \n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
    printf("Mang sau khi nhap: \n");
    inputArray(arr, size);
    free(arr);

    return 0;
}
