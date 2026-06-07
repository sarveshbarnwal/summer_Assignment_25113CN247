//WAP to recursive fibonacci.
#include<stdio.h>
int fib(int a){
    if (a==0) return 0;
    if (a==1) return 1;
    else 
    return fib(a-1) +fib(a-2);    
    
}
int main(){
    int n;
    printf("Write number of the term:"); //which term to be found.
    scanf("%d",&n);
    if(n<=0) {
        printf("Please enter a positive integer.");
        return 1;  }
    int m= fib(n-1); //As the fibonacci goes 0,1,1,2,3,5,8...
    printf("%d",m);
    return 0;
}