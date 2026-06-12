//WAP to generate Fibonacci series.
#include<stdio.h>
int fib(int a){
    if (a==0) return 0;
    if (a==1) return 1;
    else 
    return fib(a-1) +fib(a-2);    
}
int main(){
    int n;
    printf("Write number of terms:"); //generating upto a term. eg-> n=1,2,3,4...
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
        int m= fib(i);
        printf("%d ",m);
    }
    return 0;
}
/*upper code can also be used to find fibo but it makes unnecessary calls and 
    avoiding that another method is described in assignment 13b. */
