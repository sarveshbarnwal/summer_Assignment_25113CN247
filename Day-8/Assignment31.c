//WAP to print character triangle.
// A
// AB
// ABC
// ABCD
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
for(int i=1 ; i <=n ; i++){
    for(int j=1 ; j<=i ; j++){
        printf("%c",j+64); }
        printf("\n");
}
    return 0;
}