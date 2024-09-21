#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int productId;
    char* productName;
    char* category;
    float price;
    int quantity;
} Products;

void addProducts(Products *products){

    // Allocate memory for strings
    products->productName = (char*)malloc(50 * sizeof(char));  // Assuming max 50 chars for name
    products->category = (char*)malloc(50 * sizeof(char));     // Assuming max 50 chars for category

    printf("Enter the product ID: ");
    scanf("%d", &products->productId);

    getchar(); // consume '\n' left by scanf

    printf("Enter the product name: ");
    fgets(products->productName, 50, stdin);
    products->productName[strlen(products->productName) - 1] = '\0'; //remove newline character

    printf("Enter the product's category: ");
    fgets(products->category, 50, stdin);
    products->category[strlen(products->category) - 1] = '\0';

    printf("Enter the price of product: ");
    scanf("%f", &products->price);

    printf("Enter the quantity: ");
    scanf("%d", &products->quantity);

}

void main(){
    Products newProduct;
    addProducts(&newProduct);
}