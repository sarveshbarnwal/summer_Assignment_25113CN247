//WAP to check perfect number.
#include<stdio.h>
int main(){
    int n,sum=0 ;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0){
    printf("%d is not perfect",n);
    return 0;}
    for(int i=1 ; i<n ; i++){
        if(n%i == 0)
        sum= sum+i;
    }
    if(sum==n)
    printf("%d is Perfect.",n);
    else printf("%d is not perfect.",n);
    return 0;
}