#include<stdio.h>
int main()
{
    int a[] = {2, 3, 6, 1, 8, 7, 10, 5};
    int n = sizeof(a)/sizeof(a[0]);
    print_array(a,n);
    mergesort(a,0,n-1);
    print_array(a,n);
    return 0;
};

void print_array(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }
}

void merge(int a[],int lb,int mid,int ub)
{
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[k];

    while(i<=mid && j<=ub)
    {

        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {

        while(j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }

    }
    else
    {

        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        for(i=lb;i<=k;i++){
            a[i] = b[k];
        }



    }
}

void mergesort(int a[],int lb,int ub)
{

    if(lb<ub)
    {
      int mid = (lb+ub)/2;
      mergesort(a,lb,mid);
      mergesort(a,mid+1,ub);
      merge(a,lb,mid,ub);
    }
}
