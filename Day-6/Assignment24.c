//WAP to find x^n without pow().
#include<stdio.h>
int main(){
    int x,n,p=1;
    printf("Enter the base:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&n);
for(int i=1 ; i<=n ; i++){
    p= p * x;
}
printf("%d to the power %d is equal to %d",x,n,p);
    return 0;
}