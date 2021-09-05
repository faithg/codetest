void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
void quicksort(int *arr, int left, int right)
{
    /* 结束条件，子序列只剩0或1个元素 */
    if (left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int tmp = arr[i];
    printf("i:%d, j:%d\n", i, j);
    while (i != j) {


        /* 基数选择第一个arr[0]，则判断顺序需要从右边j开始，否则不满足基数左边都是小的，右边都是大值的情况 */
        while (j > i && arr[j] >= tmp) {
            j--;
        }


        while (i < j && arr[i] <= tmp) {
            i++;
        }

        if (i < j) {
           swap(&arr[i], &arr[j]);
        }
    }
    printf("arr[%d]:%d, arr[%d]:%d\n", left, arr[left], i, arr[i]);
    arr[left] = arr[i]; /* 此数参与排序 */
    arr[i] = tmp; /* 将基准值赋给i,左边都比其小，右边都比其大，本身不参与排序 */

    quicksort(arr, left, i - 1);
    quicksort(arr, i+1, right);
    return;
}

/* https://blog.csdn.net/lkp1603645756/article/details/85008715 */