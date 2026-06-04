//WAP to check Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int n,term=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int m=n;
while(m>0){
        term+=1;
        m= m/10;
    }
m=n;
for(int i=1 ; i<=term ; i++){
    int a= m%10;
    sum = sum + (int)pow(a,term);
    m=m/10;
}
if( n==sum) printf("%d is an Armstrong number.",n);
else        printf("%d is not an Armstrong number.",n);
    return 0;
}