//WAP to check strong number.
#include<stdio.h>
int fact(int n){
    if(n==1 || n==0) return 1;
    return n * fact(n-1);
}
int main(){
    int n, sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
int k=n;
while(k>0){
    int m= k%10;
    sum = sum + fact(m);
    k = k/ 10;
}
if(n==sum) printf("%d is Strong.",n);
else printf("%d is not Strong.",n);
return 0;
}