//WAP to count set bits in a number.
#include<stdio.h>
int main(){
    int n,m;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n !=0){
        m= n % 2;
        if(m==1)   sum = sum +1;
        n = n/2;
    }
    printf("the number of set bits is %d",sum);
    return 0;
}