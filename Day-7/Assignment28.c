//WAP to recursive reverse number.
#include<stdio.h>
#include<math.h>
int Rev(int n, int len){
    if(n<10) return n;
    return (((n%10) * pow(10, len -1))+ Rev(n/10, len-1));
}
int main(){
    int n;
    printf("Enter the numnber:");
    scanf("%d",&n);
    int temp=n , len =0;
    while(temp>0) {len ++ ; temp /= 10;}
        printf("the rev of the num %d is %d.",n,Rev(n,len));
    return 0;
}