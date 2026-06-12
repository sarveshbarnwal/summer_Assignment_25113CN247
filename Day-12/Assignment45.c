//WAP to write function for palindrome.
#include<stdio.h>
int isPalin(int n){
    int sum=0;
    int k=n;
    while(k!=0){
        sum= (sum * 10) + (k%10);
        k=k/10;
    }
    if(n==sum) return 1;
    else return 0;
}
 int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isPalin(n)) printf("%d is palindrome.",n);
    else printf("%d is not a palindrome.",n);
    return 0;}