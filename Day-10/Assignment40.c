//WAP to print number pyramid.
//    A
//   A B A 
//  A B C B A 
// A B C D C B A 
//A B C D E D C B A
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
for(int i=1 ; i<=n ; i++){
    for(int j=i ; j<n ; j++)
        printf(" ");
    for(int j=1 ; j<=i ; j++)
        printf("%c ",j+64);
    for(int j=1 ; j<i ; j++)
        printf("%c ",i-j+64);
    printf("\n\n");
}
return 0;}