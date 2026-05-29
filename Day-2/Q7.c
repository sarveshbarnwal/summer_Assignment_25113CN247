// WAP to find product of the digits.
#include <stdio.h>

int main() {
    int num;
    int m=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
        m=m * (num % 10);
        num = num/10;
    }
        printf("the product of digits of the num is %d",m);

    return 0;
}