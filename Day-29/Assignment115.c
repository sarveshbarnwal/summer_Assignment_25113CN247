//WAP to create menu-driven string operations system.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s2[100];
    int ch,i,len,found;
    printf("enter string: ");
    scanf("%s",s);

    while(1){
        printf("\n1.length  2.reverse  3.uppercase  4.lowercase  5.concatenate  6.compare  7.exit\n");
        printf("enter choice:");
        scanf("%d",&ch);

    switch(ch){
        case 1:
                len=strlen(s);
                printf("length=%d\n",len);
                break;
        case 2:
                len=strlen(s);
                for(i=0;i<len/2;i++){
                    char temp=s[i];
                    s[i]=s[len-1-i];
                    s[len-1-i]=temp;
                }
                printf("reversed: %s\n",s);
                break;
        case 3:
                for(i=0;s[i]!='\0';i++)
                    if(s[i]>=97&&s[i]<=122)
                        s[i]=s[i]-32;
                printf("uppercase: %s\n",s);
                break;
        case 4:
                for(i=0;s[i]!='\0';i++)
                    if(s[i]>=65&&s[i]<=90)
                        s[i]=s[i]+32;
                printf("lowercase: %s\n",s);
                break;
        case 5:
                printf("enter second string: ");
                scanf("%s",s2);
                strcat(s,s2);
                printf("concatenated: %s\n",s);
                break;
        case 6:
                printf("enter second string: ");
                scanf("%s",s2);
                if(strcmp(s,s2)==0)
                    printf("strings are equal\n");
                else
                    printf("strings are not equal\n");
                break;
        case 7:
                return 0;
        default:
                printf("wrong choice\n");
        }
    }
}