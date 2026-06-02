// WAP to reverse a number.
#include <stdio.h>

int main() {
    int num;
    int m=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
        m=m * 10 + num % 10;
        num = num/10;
    }
        printf("the reverse of the number is %d",m);

    return 0;
}