#include <stdio.h>


// Function declarations
void displayMenu();

void main(){
    printf("\nWelcome to Inventory Management System \n\n\n");

    int choice;

    displayMenu();
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            // "direct to billing section"
            break;
        case 2:
            // direct to products section
            break;
        case 3:
            // direct to update section
            break;
        case 4:
            // direct to records section
            break;
        case 5:
            // View the daily inventory
            break;
        case 6:
            // genarate sales report
            break;
        case 7:
            // terminate
            break;
        default:
            // back to main section
            break;
    }


}

// Function definitions
void displayMenu() {
    printf("Enter your choice: \n\n");
    printf("press 1 to. Process Transaction (Billing)\n");
    printf("press 2 to. Add Product(New stock)\n");
    printf("press 3 to. Update Product\n");
    printf("press 4 to. Record Sale\n");
    printf("press 5 to. View Inventory\n");
    printf("press 6 to. Generate Sales Report\n");
    printf("press 7 to. Exit\n-> ");
}