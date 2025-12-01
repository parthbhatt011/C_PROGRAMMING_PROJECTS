#include<stdio.h>

int main(){
            int choice ;
            double a,b;
        
        do{
        printf("\n===== MENU =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter A Number A: ");
            scanf("%lf",&a);
            printf("Enter A Number A: ");
            scanf("%lf",&b);
            printf("The sum of a and b is %.4lf ", a+b);
            break;
        
        case 2:
            printf("Enter A Number A: ");
            scanf("%lf",&a);
            printf("Enter A Number A: ");
            scanf("%lf",&b);
            printf("The Difference of a and b is %.4lf ", a-b);
            break;

        case 3:
            printf("Enter A Number A: ");
            scanf("%lf",&a);
            printf("Enter A Number A: ");
            scanf("%lf",&b);
            printf("The Product of a and b is %.4lf", a*b);
            break;

        case 4:
            printf("Enter A Number A: ");
            scanf("%lf",&a);
            printf("Enter A Number A: ");
            scanf("%lf",&b);
            printf("The Division of a and b is %.4lf", a/b);
            break;

        case 5:
            printf("Exiting program..............");
            break;

        default:
            printf("enter a valid number");
            break;
        }
    }while (choice != 5);


return 0;
}