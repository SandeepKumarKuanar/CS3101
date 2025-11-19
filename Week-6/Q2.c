/* 
Write a C program to simulate the reception of an online e-shop. First, greet the customer by printing a welcome message. Then, print the catalog of five items (with a product id like 0, 1,.. ) with the prices and quantities present for each. Next,  request the customer to provide the id of the product s/he wants to buy. Using switch-case (that will move to the appropriate ‘case’ for the product), for each product, print a message asking for the quantity of the product selected (exit with an appropriate message if a wrong option has been provided for the product id). If the quantity is less than or equal to that of the available item, print the message with the final bill and update the stock (if the quantity requested is more than that available, print an appropriate message and exit). Finally, print a nice goodbye message.

The above database should be implemented through a file “catalogue.txt”. Each product should be encapsulated in a structure PRODUCT containing item id, name, stock etc. Store a decent number of products in catalogue.txt in using fwrite(). Then, read from the same file using fread() and display the products to the customer. If the customer buys a product, update the same in the file so that the change is sustained even after the program ends. When you run your program again, you should be able to see the updated stock.
*/
#include <stdio.h>
#include <string.h>
// may add more features for PRODUCT struct later
struct PRODUCT {
    int id;
    char name[50];
    float price;
    int stock;
};

#define MAX_PRODUCTS 20

// ran this once to create the "catalogue.txt" database file
void createCatalogue() {
    struct PRODUCT catalogue[MAX_PRODUCTS] = {
        // 20 example data from AI, all prices in Dollars
        {0, "Laptop", 1000, 10},
        {1, "Smartphone", 500, 20},
        {2, "Tablet", 300, 15},
        {3, "Headphones", 80, 30},
        {4, "Smartwatch", 200, 25},
        {5, "Camera", 600, 8},
        {6, "Printer", 150, 12},
        {7, "Monitor", 250, 18},
        {8, "Keyboard", 50, 40},
        {9, "Mouse", 30, 50},
        {10, "External Hard Drive", 90, 22},
        {11, "USB Flash Drive", 20, 60},
        {12, "Speakers", 40, 35},
        {13, "Router", 60, 14},
        {14, "Webcam", 70, 16},
        {15, "Microphone", 80, 10},
        {16, "Projector", 400, 5},
        {17, "Gaming Console", 300, 7},
        {18, "VR Headset", 500, 4},
        {19, "Smart Home Hub", 130, 11}
    };

    FILE *file = fopen("catalogue.txt", "wb");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    fwrite(catalogue, sizeof(struct PRODUCT), MAX_PRODUCTS, file);
    fclose(file);
    printf("Catalogue created successfully.\n");
}

int displayCatalogue(struct PRODUCT catalogue[]){
    // Welcome message
    printf("------------------------------------------\n");
    printf("   Welcome to my 'Offline' Amazona-Shop!\n");
    printf("\n------------------------------------------\n");
    FILE *file = fopen("catalogue.txt", "rb");
    if (file == NULL) {
        printf("Error opening catalogue file. Please create it first.\n");
        return 1;
    }
    
    fread(catalogue, sizeof(struct PRODUCT), MAX_PRODUCTS, file);
    fclose(file);

    // Display catalogue (showing only first 5 items as per question)
    printf("Available Products:\n");
    printf("-------------------\n");
    // Display all 20 products
    for (int i = 0; i < MAX_PRODUCTS; i++) {
        printf("ID: %d | %-20s | Price: $%.2f | Stock: %d\n", 
            catalogue[i].id, catalogue[i].name, 
            catalogue[i].price, catalogue[i].stock);
    }
    printf("\n");
    return 0;
}

// main brain
int main() {
    // (ran once, at the start)
    // createCatalogue();
    // return 0;
    struct PRODUCT catalogue[MAX_PRODUCTS];
    displayCatalogue(catalogue);


    // Start the search
    int productId;
    printf("Enter the product ID you want to buy: ");
    scanf("%d", &productId);

    int quantity;
    float totalBill;

// Switch-case for product selection, via fallthrough cases
    switch(productId) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            printf("You selected: %s\n", catalogue[productId].name);
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            
            if (quantity <= 0) {
                printf("Invalid quantity!\n");
                printf("Goodbye!\n");
                return 0;
            } else if (quantity > catalogue[productId].stock) {
                printf("Sorry! Only %d units available. Cannot process order.\n", catalogue[productId].stock);
                printf("Goodbye!\n");
                return 0;
            } else {
                // Valid purchase
                totalBill = quantity * catalogue[productId].price;
                printf("\n--- Bill ---\n");
                printf("Item: %s\n", catalogue[productId].name);
                printf("Quantity: %d\n", quantity);
                printf("Price per unit: $%.2f\n", catalogue[productId].price);
                printf("Total Bill: $%.2f\n", totalBill);
                printf("------------\n");
                
                // Update stock
                catalogue[productId].stock -= quantity;
                printf("Stock updated! Remaining stock: %d\n", 
                    catalogue[productId].stock);
            }
            break;

        default:
            printf("Invalid product ID! Exiting...\n");
            printf("Goodbye!\n");
            return 0;
    }

    // Write updated catalogue back to file
    FILE *file = fopen("catalogue.txt", "wb");
    if (file == NULL) {
        printf("Error updating catalogue file.\n");
        return 1;
    }
    
    fwrite(catalogue, sizeof(struct PRODUCT), 20, file);
    fclose(file);

    // Goodbye message
    printf("\nThank you for shopping with us!\n");
    printf("==================END==================\n");
    return 0;
}