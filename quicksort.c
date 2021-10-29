#include<stdio.h>


void print_array(int arr[], int size)
{
    int i;
    for(i=0 ; i<size ; i++)
{
    printf("%d ", arr[i]);
}
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quick_sort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quick_sort(arr, lb, loc - 1);
        quick_sort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[] = {2, 3, 12, 1, 8, 7, 10, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, size);
    quick_sort(arr, 0, size-1);
    printf("\n");
    printf("the sorted array is: \n");
    print_array(arr, size);
    return 0;

}
