// WAP to check whether a number is palindrome.
#include <stdio.h>

int main() {
    int num;
    int m=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int n=num;
    while(num>0){
        m=m * 10 + num % 10;
        num = num/10;
    }
    if(m==n)
        printf("the number is a palindrome.");
    else
        printf("the number is not a palindrome.");

    return 0;
}