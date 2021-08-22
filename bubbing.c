#include <stdio.h>
#include <stdlib.h>


void bubbing(int *arr, int len)
{
    int i,j;
    int tmp;
    for (i = 0; i < len; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    return;
}

int main()
{
    int arr[10] = {1,2,5,3,7,4,9,8,10,6};
    bubbing(arr, 10);
    int i;
    for (i = 0; i < 10; i++) {
        printf("arr[%d]:%d ", i, arr[i]);
    }
    printf("\n");
    return 0;
}
