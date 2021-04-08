#include<stdio.h>

int main()
{

    int a[] = {2, 3, 5 ,8};
    int x = 3;
    int n = sizeof(a)/sizeof(a[0]);
    int result = search(a, n, x);
    if(result == -1)
    {
        printf("element not found");
    }
    else{
        printf("element found at index %d", result);
    }

}
int search(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
       


    }
    return -1
}
