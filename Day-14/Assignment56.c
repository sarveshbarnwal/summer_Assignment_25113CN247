//WAP to find duplicates in array.
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
    int dup[n],count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
        if (arr[i]==arr[j]) {
            dup[count]=arr[i];
            count++;
            break;
         } }}
        for(int i=0 ; i<count;i++){
            if(i==count-1) 
            printf("%d are duplicates.",dup[i]);
            else
            printf("%d and ", dup[i]);
        }
    return 0;
    }