//WAP to find largest prime factor.
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number:");
    scanf("%d",&n);
if(n<=1) {
    printf("Enter a positive integer");
    return 1;
}
for(int i=2 ; i<=n ; i++){
    while(n%i==0){
       m= i ;
       n = n/i; 
    }
}
    printf("%d",m);
return 0;
}