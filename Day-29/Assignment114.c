//WAP to create menu-driven array operations.
#include<stdio.h>
int main(){
    int arr[100],n,i,ch,pos,val,found,temp;

    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);

    while(1){
        printf("\n1.display  2.insert  3.delete  4.search  5.reverse  6.exit\n");
        printf("enter choice:");
        scanf("%d",&ch);

    switch(ch){
        case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                printf("\n");
                break;
        case 2:
                printf("enter position and value:");
                scanf("%d %d",&pos,&val);
                for(i=n;i>=pos;i--)
                    arr[i]=arr[i-1];
                arr[pos-1]=val;
                n++;
                break;
        case 3:
                printf("enter position: ");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++)
                    arr[i]=arr[i+1];
                n--;
                break;
        case 4:
                printf("enter value: ");
                scanf("%d",&val);
                found=0;
                for(i=0;i<n;i++){
                    if(arr[i]==val){
                        printf("found at index %d\n",i);
                        found=1;
                        break;
                    }
                }
                if(!found) printf("not found\n");
                break;
        case 5:
                for(i=0;i<n/2;i++){
                    temp=arr[i];
                    arr[i]=arr[n-1-i];
                    arr[n-1-i]=temp;
                }
                printf("reversed\n");
                break;
        case 6:
                return 0;
        default:
                printf("wrong choice\n");
        }
    }
}