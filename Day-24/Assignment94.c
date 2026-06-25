//WAP to Compress a string.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter a string:");
    scanf("%[^\n]",s);
    int count =1;
    for(int i=0 ; i< strlen(s) ; i++){
        if(s[i]==s[i+1])    count ++;
        if(s[i]!=s[i+1]){   
        printf("%c%d",s[i],count);
        count=1;
    }
}
    return 0;
}