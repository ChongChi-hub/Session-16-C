#include <stdio.h>

void findArr(int n, int arr[]) {
    int count = 0;
    int *a = arr;
    for (int i = 0; i < 11; i++) {
        if (*(a+i) == n){
            printf("arr[%d] ", i);
            count++;
        }
    }
    if (count == 0){
        printf("Khong co so can tim trong mang");
    }

}
int main(){
    int arr[6]={2,3,5,5,6,8};
    int n;
    printf("Mời nhập phần tử muốn tìm: ");
    scanf("%d", &n);
    findArr(n,arr);
    return 0;

}