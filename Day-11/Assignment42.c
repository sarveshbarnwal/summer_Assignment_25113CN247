//WAP to write function to find maximum.
#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
     int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    printf("The max of %d and %d is %d:",a,b,max(a,b));
    return 0;
}