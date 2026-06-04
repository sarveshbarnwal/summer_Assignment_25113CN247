//WAP to print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    printf("Enter the range:");
    scanf("%d%d",&m,&n);
for( int i=m ; i<=n ; i++){
    int sum=0 ,term=0;
     int k=i;
while(k>0){
        term+=1;
        k= k/10;
    }
k=i;
for(int j=1 ; j<=term ; j++){
    int a= k%10;
    sum = sum + (int)pow(a,term);
    k=k/10;
}
if( i==sum) printf("%d ",i);
}
    return 0;
}