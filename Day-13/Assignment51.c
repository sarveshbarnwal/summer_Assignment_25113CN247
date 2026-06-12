//WAP to find largest and smallest element.
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
    int min=arr[0]; int max=arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]>max)      max=arr[i];
        if(arr[i]<min)      min=arr[i];
    }
    printf("the largest and smallest element of array is %d and %d respectively.",max,min);
    return 0;
}

