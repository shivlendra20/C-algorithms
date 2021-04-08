#include <stdio.h>
#include <math.h>

int binarySearch(int arr[], int l, int r, int item)
{int mid;
  if(l<=r){
    mid=floor(l+(r-l)/2);

    if(arr[mid]==item)
      return mid;

    if(arr[mid]>item)
      return binarySearch(arr,l,mid-1,item);
 //       printf("left = %d",l);
 //     printf("right = %d",mid-1);

  //  else
   return binarySearch(arr,mid+1,r,item);
 //        printf("left = %d",mid +1);
 //     printf("right = %d",r);


  }
  return -1;
}

int main() {
  int arr[]={1,2,3,4,5,6,7,8};
 // int l=0;
  int r = sizeof(arr)/sizeof(arr[0]);
  int item=9;

 // int r=sizeof(arr)/sizeof(arr[0]);
  int result=binarySearch(arr,0,r-1,item);
  if(result!= -1){
    printf("Item at index %d",result);
  }
  else{
    printf("Item not found");
  }

    return 0;
}
