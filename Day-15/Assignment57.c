//WAP to reverse array.
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
    int temp=0;
    for(int i=0 ; i<n/2 ; i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
    }