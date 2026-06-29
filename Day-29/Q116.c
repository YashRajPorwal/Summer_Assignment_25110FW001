#include <stdio.h>
#include <string.h>
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int choice, n = 0, i, id, found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                n++;

                printf("Product added successfully!\n");
                break;


            case 2:
                printf("\n----- PRODUCT LIST -----\n");

                if(n == 0)
                {
                    printf("No products available!\n");
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nID: %d", p[i].id);
                        printf("\nName: %s", p[i].name);
                        printf("\nQuantity: %d", p[i].quantity);
                        printf("\nPrice: %.2f\n", p[i].price);
                    }
                }
                break;


            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("\nProduct Found");
                        printf("\nName: %s", p[i].name);
                        printf("\nQuantity: %d", p[i].quantity);
                        printf("\nPrice: %.2f\n", p[i].price);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product not found!\n");
                }
                break;


            case 4:
                printf("Enter Product ID to update quantity: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Quantity updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product not found!\n");
                }
                break;


            case 5:
                printf("Enter Product ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        for(int j = i; j < n-1; j++)
                        {
                            p[j] = p[j+1];
                        }

                        n--;

                        printf("Product deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product not found!\n");
                }
                break;


            case 6:
                printf("Exiting Inventory System...");
                break;


            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}