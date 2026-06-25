//WAP to Find common characters in strings.
#include<stdio.h>
int main(){
    char s1[100], s2[100];
    printf("Enter 1st string:");
    scanf("%[^\n]",s1);
    printf("Enter 2nd string:");
    scanf(" %[^\n]",s2);

    printf("Common characters:");
    for(int i=0 ; s1[i] != '\0' ; i++){
        for(int j=0 ; s2[j] != '\0' ; j++){
            if(s1[i]==s2[j]){
                printf("%c ",s1[i]);
                break;
            }
        }
    }
    return 0;
}