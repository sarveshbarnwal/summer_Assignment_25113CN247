//WAP to rotate array left.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array.");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
for(int i=0 ; i<n ; i++){
    if(i==n-1)  arr[n-1]=temp;
    else   arr[i]=arr[i+1];
    }
for(int i=0 ; i<n ; i++){
        printf(" %d",arr[i]);
    }
return 0;}