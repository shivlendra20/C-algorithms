#include<stdio.h>
int main()
{
    int a[] = {2,3,5,4,8,10,9,1};
    int n = sizeof(a)/sizeof(a[0]);
    selection_sort(a, n);
    printf("the sorted array is: \n");
    print_array(a, n);
    return 0;




}
void print_array(int a[], int n)
{
    int i;
    for(i = 0; i< n ; i++)
    {
        printf("%d ", a[i]);

    }

}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int a[] , int n)
{
    int i , j , min;
    for(i = 0 ; i < n-1 ; i++)
    {
        min = i;
        for(j = i+1 ; j < n ; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(&a[min], &a[i]);
        }

    }
}

//OUTPUT:
//2 3 4 5 8
