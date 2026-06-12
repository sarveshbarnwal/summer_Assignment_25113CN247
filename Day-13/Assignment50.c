//WAP to find sum and average of array.
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
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
float avg = (float)sum/n;
printf("the sum and average of array are %d and %f respectively.",sum,avg);
    return 0;
}