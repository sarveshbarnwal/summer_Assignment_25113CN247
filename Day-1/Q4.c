//WAP to Count digits in a number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int digit=0;
    while(num>0){
        digit+=1;
    num=num/10;

    }
    printf("the number of digits of %d is %d",num,digit);
return 0;
}