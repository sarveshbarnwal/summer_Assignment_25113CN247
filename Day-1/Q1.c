//WAP to Calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
    int N,sum=0;
    printf("enter N:");
    scanf("%d",&N);
for(int i=0;i<=N;i++){
    sum+=i;
}
    printf("Sum is %d",sum);
    
}
