//WAP to count even and odd elememts.
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
    int even=0; int odd=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0)     even++;
        else        odd++;
    }
    printf("the number of even and odd elememts is %d and %d respectively.",even,odd);
    return 0;
}


