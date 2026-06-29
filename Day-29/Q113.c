#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;

    printf("----- MENU DRIVEN CALCULATOR -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice != 5)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Division = %.2f", result);
            }
            else
            {
                printf("Cannot divide by zero!");
            }
            break;

        case 5:
            printf("Calculator closed.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}