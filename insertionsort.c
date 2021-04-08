#include<stdio.h>
int main()
{
    int a[] = {2,3,5,4,8};
    int n = sizeof(a)/sizeof(a[0]);
    printf("The sorted array is: ");
    insertion_sort(a, n);
    print_array(a, n);




}
void print_array(int a[], int n)
{
    int i;
    for(i = 0; i< n ; i++)
    {
        printf("%d ", a[i]);

    }

}
void insertion_sort(int a[], int n)
{
    int i , temp , j;
    for(i = 1 ; i < n ; i++) //starting with unsorted sublist
    {
        temp = a[i];     //first element of the unsorted sublist
        j = i - 1;

        while( j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}


//OUTPUT:
//2 3 4 5 8
