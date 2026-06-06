//WAP to convert decimal to binary.
#include<stdio.h>
int main(){
    int n,m;
    long long bin=0;
    long long place = 1;
    printf("Enter the number:");
    scanf("%d",&n);

while(n!=0){
    m=n%2;
    n=n/2;
    bin =  bin +(place *  m);
    place = place * 10;
}
printf("%lld is the binary.",bin);
return 0;
}