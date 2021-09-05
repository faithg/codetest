void slect(int *arr, int len)
{
    int i,j;
    int tmp,min;

    for (i = 0; i < len; i++) {
        min = arr[i];
        for (j = i + 1; j < len; j++) {
            if (min > arr[j]) {
                tmp = arr[j];
                arr[j] = min;
                min = tmp;
            }
        }
        arr[i] = min;
    }
    return;
}