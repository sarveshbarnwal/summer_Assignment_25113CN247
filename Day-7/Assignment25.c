//WAP to recursive factorial.
#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0){
        printf("Pls enter non negative integer.");
        return 1;
    }
    printf("Factorial of %d is equal to %d.",n,fact(n));
    return 0;
}