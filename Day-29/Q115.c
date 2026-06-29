#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], result[200];
    int choice, length;

    printf("Enter first string: ");
    gets(str1);

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                length = strlen(str1);
                printf("Length of string = %d", length);
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied string = %s", str2);
                break;

            case 3:
                printf("Enter second string: ");
                gets(str2);

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated string = %s", result);
                break;

            case 4:
                printf("Enter second string: ");
                gets(str2);

                if(strcmp(str1, str2) == 0)
                {
                    printf("Strings are equal");
                }
                else
                {
                    printf("Strings are not equal");
                }
                break;

            case 5:
                strrev(str1);
                printf("Reversed string = %s", str1);
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}