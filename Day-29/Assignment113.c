//WAP to create menu driven calculator.
#include<stdio.h>
int main(){
    int ch;
    float a,b,res;
    while(1){
        printf("\n--- Calculator ---\n");
        printf("1. Add  ");
        printf("2. Subtract  ");
        printf("3. Multiply  ");
        printf("4. Divide  ");
        printf("5. Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);

        if(ch==5){
            printf("Exited.\n");
            break;
        }
        printf("Enter a and b:");
        scanf("%f %f",&a,&b);

        switch(ch){
            case 1: res=a+b; printf("Result: %.2f\n",res); break;
            case 2: res=a-b; printf("Result: %.2f\n",res); break;
            case 3: res=a*b; printf("Result: %.2f\n",res); break;
            case 4:
                if(b==0) printf("Not defined as divided by zero.\n");
                else{ res=a/b; printf("Result: %.2f\n",res); }
                break;
            default: printf("invalid choice\n");
        }
    }
    return 0;
}