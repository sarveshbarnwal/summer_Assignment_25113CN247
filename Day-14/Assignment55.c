//WAP to second largest element.
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
    int max=arr[0], secmax=0;
for(int i=1 ; i<n ; i++){
    if(arr[i]>max){
        secmax=max;
        max=arr[i];} }
printf("The second largest element is %d",secmax);
return 0;
}
