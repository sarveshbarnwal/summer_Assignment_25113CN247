//WAP to Develop complete mini project using , strings and functions.
#include<stdio.h>
#include<string.h>

char name[100][50];
int marks[100];
int n=0;

void add()
{
    printf("enter name: ");
    scanf("%s",name[n]);
    printf("enter marks: ");
    scanf("%d",&marks[n]);
    n++;
}

void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],marks[i]);
    }
}

void search()
{
    char s[50];
    printf("enter name: ");
    scanf("%s",s);

    for(int i=0;i<n;i++)
    {
        if(strcmp(s,name[i])==0)
        {
            printf("%s %d\n",name[i],marks[i]);
            return;
        }
    }
    printf("not found");
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.add  2.display  3.search  4.exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                add();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                return 0;

            default:
                printf("invalid");
        }
    }
}