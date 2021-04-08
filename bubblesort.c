#include<stdio.h>
int main()
{
    int a[] = {2,3,5,4,8};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a , n);
    printf("the sorted array is: \n");
    print_array(a , n);



}
void print_array(int a[], int size)
{
    int i;
    for(i = 0; i< size ; i++)
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
void bubble_sort(int a[], int n)
{

    for(int i = 0 ; i < n-1 ; i++) //for PASSES
    {
       int flag = 0;               // no SWAP
       for(int j = 0 ; j < n-1-i ; j++) //for COMPARISON
       {
           if(a[j] > a[j+1])
           {
               swap(&a[j], &a[j+1]);
               flag = 1;        // SWAPPING done
           }
       }
       if(flag == 0)
       {
           break;
       }
    }
}



//OUTPUT:
//the sorted array is:
//2 3 4 5 8
