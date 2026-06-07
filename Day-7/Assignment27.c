//WAP to recursive sum of digits.
#include<stdio.h>
int sumdigits(int n){
    if(n<10) return n;
    return n%10 + sumdigits(n/10);
}
int main(){
    int n;
    printf("Enter the numnber:");
    scanf("%d",&n);
    printf("the sum of digits of %d is equal to %d.",n,sumdigits(n));
    return 0;
}