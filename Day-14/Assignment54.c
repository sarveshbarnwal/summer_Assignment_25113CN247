//WAP to frequency of an element.
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
    int target,freq=0;
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i=0 ; i<n ; i++){
        if(arr[i]==target)  freq++;
    }
    printf("the frequency of %d is %d.",target,freq);
    return 0;
}