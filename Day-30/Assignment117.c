//WAP to create student record system using arrays and strings.
 #include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s[50];
    int n = 0, choice, i;

while (1)
    {
        printf("\n1. Add  2. Display  3. Search  4. Delete  5. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);

        if (choice == 1){
            printf("Enter roll number: ");
            scanf("%d", &s[n].roll);
            printf("Enter name: ");
            scanf(" %[^\n]s", s[n].name);
            printf("Enter marks: ");
            scanf("%f", &s[n].marks);
            n++;
        }
        else if (choice == 2){
            if (n == 0)
                printf("No records found.\n");

            for (i = 0; i < n; i++){
                printf("Roll: %d\tName: %s\tMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            }
        }
        else if (choice == 3)
        {
            int r, found=0;
            printf("Enter roll number to search:");
            scanf("%d", &r);

            for(i=0; i<n; i++)
            {
                if (s[i].roll == r)
                {
                    printf("Found: Name: %s\tMarks: %.2f\n", s[i].name, s[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Roll number not found.\n");
        }
        else if (choice == 4)
        {
            int r, found = 0;
            printf("Enter roll number to delete: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == r)
                {
                    found = 1;
                    break;
                }
            }

            if (found)
            {
                for (int j = i; j < n - 1; j++)
                {
                    s[j] = s[j + 1];
                }
                n--;
                printf("Record deleted.\n");
            }
            else
            {
                printf("Roll number not found.\n");
            }
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}