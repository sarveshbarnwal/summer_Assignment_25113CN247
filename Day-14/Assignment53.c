//WAP to linear search.
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
    int target;
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i=0 ; i<n ; i++){
        if(arr[i]==target)  printf("found at index %d",i);
    }
    return 0;
}