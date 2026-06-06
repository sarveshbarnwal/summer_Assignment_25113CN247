//WAP to convert binary into decimal.
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,dec=0, i=0;
    printf("Enter the number:");
    scanf("%d",&n);

while(n != 0){
    m= n% 10;
    dec = dec + (m * pow(2,i));
    n = n/10;
    i++;
}
printf("%d is the decimal",dec);
return 0;
}