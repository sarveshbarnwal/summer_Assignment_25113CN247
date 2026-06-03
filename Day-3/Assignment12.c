//WAP to find LCM of two numbers.
#include<stdio.h>
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int fir,sec;
    int LCM=0;                
printf("Enter the first and second number:");
scanf("%d %d",&fir,&sec);
int limit=max(fir,sec);
    for(int i=limit ; i<= fir * sec ; i++){
    if( i % fir == 0 && i % sec == 0){
        LCM = i ;
    printf("LCM is %d.",LCM);
        break; }}
return 0;
}