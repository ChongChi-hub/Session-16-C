#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void update(int *arr, int newValue, int pos, int size){
    if(pos >= 0 && pos < size){
        *(arr + pos) = newValue;
    } else {
        printf("Vi tri ko hop le!!!\n");
    }
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    int newValue, pos;
    printf("\nNhap phan tu muon cap nhat: ");
    scanf("%d", &newValue);
    printf("Nhap vi tri muon cap nhat: ");
    scanf("%d", &pos);
    update(arr, newValue, pos, size);
    printf("Mang sau khi cap nhat: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }


    return 0;
}
