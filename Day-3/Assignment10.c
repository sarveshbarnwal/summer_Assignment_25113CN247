//WAP to print prime numbers in a range.
#include<stdio.h>
int Prime(int n){
    if(n<=1) return 0;
    for(int i=2 ; i<=n/2 ; i++){
        if (n % i == 0 ) return 0;
    }
    return 1;
}

int main() {
    int low,high;
    printf("Enter lower number:");
    scanf("%d",&low);
    printf("Enter upper number:");
    scanf("%d",&high);

    printf("Prime numbers between %d and %d are :\n",low,high);
    for(int i=low ; i <+ high ; i++){
        if( Prime(i)==1 )
            printf("%d ", i);
    }
    return 0;
}