//WAP to Create inventory management system.
#include<stdio.h>
#include<string.h>
struct item{
    int id;
    char name[50];
    int qty;
    float price;
};
int main(){
    struct item inv[100];
    int n=0,ch,i,id,found;

while(1){
    printf("\n1.add item  2.display  3.update qty  4.delete item  5.search  6.exit\n");
    printf("enter choice: ");
    scanf("%d",&ch);

switch(ch){
    case 1:
    printf("enter id: ");
    scanf("%d",&inv[n].id);
        printf("enter name: ");
        scanf("%s",inv[n].name);
        printf("enter qty: ");
        scanf("%d",&inv[n].qty);
        printf("enter price: ");
        scanf("%f",&inv[n].price);
            n++;
        printf("item added\n");
            break;
    case 2:
        if(n==0){ printf("no items\n"); break; }
            for(i=0;i<n;i++)
                printf("id:%d name:%s qty:%d price:%.2f\n",inv[i].id,inv[i].name,inv[i].qty,inv[i].price);
                break;
    case 3:
        printf("enter id: ");
        scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++){
                if(inv[i].id==id){
                    printf("enter new qty: ");
                    scanf("%d",&inv[i].qty);
                    printf("qty updated\n");
                    found=1;
                    break;
                    }
                }
        if(!found) printf("id not found\n");
                break;
    case 4:
        printf("enter id: ");
        scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++){
                if(inv[i].id==id){
                    for(int j=i;j<n-1;j++)
                        inv[j]=inv[j+1];
                        n--;
                printf("item deleted\n");
                    found=1;
                    break;
                    }
                }
        if(!found) printf("id not found\n");
                break;
        case 5:
            printf("enter id: ");
            scanf("%d",&id);
                found=0;
            for(i=0;i<n;i++){
                if(inv[i].id==id){
                    printf("id:%d name:%s qty:%d price:%.2f\n",inv[i].id,inv[i].name,inv[i].qty,inv[i].price);
                    found=1;
                    break;
                    }
                }
            if(!found) printf("id not found\n");
                break;
        case 6:
            return 0;
        default:
                printf("wrong choice\n");
        }
    }
}