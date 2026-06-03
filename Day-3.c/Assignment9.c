//WAP to check whether a number is prime
#include<stdio.h>
int main(){
    int n,m=0;
    printf("Enter the number:");
    scanf("%d",&n);

if(n<=1){
    printf("%d is not prime.",n);
    return 0;
}
for(int i=2; i<=n/2 ; i++){
    if(n%i==0){
        m=m+1;
        break;
    }}
if(m==0)
    printf("%d is prime.",n);
else
    printf("%d is not prime.",n);
    
    return 0;
}