//WAP to write function for armstrong.
#include<stdio.h>
#include<math.h>
int isArmstr(int n){
    int k=n;
    int dig=0,sum=0;
    while(k>0){
    dig++;
    k/=10; }
    k=n;
for(int i=1 ; i<=dig ; i++){
    sum= sum + pow(k%10,dig);
    k/=10;
}
if(sum==n)  return 1;
else return 0;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isArmstr(n)) printf("%d is an armstrong.",n);
    else printf("%d is not an armstrong..",n);
    return 0;}
