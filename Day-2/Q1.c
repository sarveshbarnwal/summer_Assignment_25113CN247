// WAP to find sum of digits of a number
#include <stdio.h>

int main() {
    int num;
    int m=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
        m=m + num%10;
        num = num/10;
    }
        printf("the sum of digits of the num is %d",m);

    return 0;
}