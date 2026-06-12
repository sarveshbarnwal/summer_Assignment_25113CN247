//Alternate code.
#include<stdio.h>
int main(){
    int n;
    printf("Write number of terms:"); //generating upto a term. eg-> n=1,2,3,4...
    scanf("%d",&n);
    int a=0 ; int b=1;
    for(int i=0 ; i<n ; i++){
        printf("%d ",a);
        int next = a+b;
        a=b;
        b=next;
    }
    return 0;
}