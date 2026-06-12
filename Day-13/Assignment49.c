//WAP to input and display aray.
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
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}