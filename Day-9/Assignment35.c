//WAP to print repeated character pattern.
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
for(int i=0 ; i <n ; i++){
    for(int j=0 ; j<=i ; j++){
        printf("%c",i+65); }
        printf("\n");
}
    return 0;
}
