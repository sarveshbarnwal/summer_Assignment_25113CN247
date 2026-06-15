//WAP to move zeroes to end.
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
    int j=0;
for(int i=0 ; i<n ; i++){
    if(arr[i]!=0){
    arr[j]=arr[i];
    j++;}
}
for(int i=j ; i<n ; i++){
    arr[i]=0;
}
for(int i=0 ; i<n ; i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
