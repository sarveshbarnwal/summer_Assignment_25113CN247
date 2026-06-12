//WAP to write function for perfect number.
#include<stdio.h>
int isPerfect(int n){
    int sum=0;
     if(n==0) return 0;
    for(int i=1 ; i<n ; i++){
        if(n%i == 0)
        sum= sum+i;
    }
    if(sum==n) return 1;
    else return 0;;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isPerfect(n)) printf("%d is perfect.",n);
    else    printf("%d is not perfect.",n);
    return 0;
}