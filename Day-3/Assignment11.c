//WAP to find GCD of two numbers.
#include<stdio.h>
int min(int a, int b){
    if(a>b) return b;
    else return a;
}
int main(){
    int fir,sec;
    int GCD ;
    printf("Enter the first and second number:");
    scanf("%d %d",&fir,&sec);
    int limit=min(fir,sec);
    for(int i=1 ; i<=limit ; i++){
        if ( fir % i == 0 && sec % i == 0)
            GCD=i;
    }
    printf("GCD is %d",GCD);
    return 0;
}