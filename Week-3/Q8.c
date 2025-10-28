/*
 * Write a C program to simulate the reception of an online e-shop. 
 * First, greet the customer by printing a welcome message. 
 * Then, print the catalog of five items (with a product id like 0, 1,.. ) with the prices and quantities present for each. 
 * Next,  request the customer to provide the id of the product s/he want to buy. 
 * Using switch-case (that will move to the appropriate ‘case’ for the product), 
 * for each product, print a message asking for the quantity of the product selected 
 * (exit with an appropriate message if a wrong option has been provided for the product id). 
 * If the quantity is less than or equal to that of the available item, 
 * print the message with the final bill and update the stock (if the quantity requested is more than that available, 
 * print an appropriate message and exit). Finally, print a nice goodbye message.
 *
 * In my case it would be a book outlet example shop
 * */
#include<stdio.h>
int main(){
  // raw and dummy data
  int num_book1 = 10, num_book2 = 20, num_book3 = 30, num_book4 = 25, num_book5 = 22;
  int prices_book1 = 100, prices_book2 = 200, prices_book3 = 350, prices_book4 = 400, prices_book5 = 190; 
  int id_book1 = 1, id_book2 = 2, id_book3 = 3, id_book4 = 4, id_book5 = 5;
  
  // asking to the customer
  int ask_id, ask_quantity;
  printf("Hello, Welcome to `Nile Sells Books`!\n");
  printf("Printing the catalog . . . \n");
  printf(".\n");
  printf(".\n");
  printf(".\n");

  printf("Book1 = `Cormen's Book on Algo`, ID = %d, quantity = %d, price per piece = %d\n", id_book1, num_book1, prices_book1);
  printf("Book2 = `Book on C programming language`, ID = %d, quantity = %d, price per piece = %d\n", id_book2, num_book2, prices_book2);
  printf("Book3 = `Programmer's guide to Networking`, ID = %d, quantity = %d, price per piece = %d\n", id_book3, num_book3, prices_book3);
  printf("Book4 = `Thinking in Python`, ID = %d, quantity = %d, price per piece = %d\n", id_book4, num_book4, prices_book4);
  printf("Book5 = `HTTP: A definitive guide`, ID = %d, quantity = %d, price per piece = %d\n", id_book5, num_book5, prices_book5);

  printf("Ask for the book using the correct ID this time\n");
  scanf("%d", &ask_id);
  printf("Ask for the quantity of the book, remember that should be less than or equal to what is available\n");
  scanf("%d", &ask_quantity);

  // using switch-case to determine the output
  int exit = 0, ask_more;
  while(exit == 0){
    switch (ask_id) {
      // for Book 1
      case 1:
        if (ask_quantity <= num_book1) {
          printf("Your final price is = %d\n", ask_quantity * prices_book1);
          num_book1 -= ask_quantity;
          printf("Finally, the updated stock is = %d\n", num_book1);
          } else {
          printf("Asked quantity %d can't be greater than available quantity %d\n", ask_quantity, num_book1);
        }
        break;
      // for Book 2
      case 2:
        if (ask_quantity <= num_book2) {
          printf("Your final price is = %d\n", ask_quantity * prices_book2);
          num_book2 -= ask_quantity;
          printf("Finally, the updated stock is = %d\n", num_book2);
        } else {
          printf("Asked quantity %d can't be greater than available quantity %d\n", ask_quantity, num_book2);
        }

        break;
      // for Book 3
      case 3:
        if (ask_quantity <= num_book3) {
          printf("Your final price is = %d\n", ask_quantity * prices_book3);
          num_book3 -= ask_quantity;
          printf("Finally, the updated stock is = %d\n", num_book3);
        } else {
          printf("Asked quantity %d can't be greater than available quantity %d\n", ask_quantity, num_book3);
        }

        break;
      // for Book 4
      case 4:
        if (ask_quantity <= num_book4) {
          printf("Your final price is = %d\n", ask_quantity * prices_book4);
          num_book4 -= ask_quantity;
          printf("Finally, the updated stock is = %d\n", num_book4);
          } else {
          printf("Asked quantity %d can't be greater than available quantity %d\n", ask_quantity, num_book4);
        }

        break;
      // for Book 5
      case 5:
        if (ask_quantity <= num_book5) {
          printf("Your final price is = %d\n", ask_quantity * prices_book5);
          num_book5 -= ask_quantity;
          printf("Finally, the updated stock is = %d\n", num_book5);
          } else {
          printf("Asked quantity %d can't be greater than available quantity %d\n", ask_quantity, num_book5);
        }
        break;
    }
    printf("Do you want to take more? Type 1 for 'Yes' or Type 0 for 'No'\n"); 
    scanf("%d", &ask_more);

    if(ask_more == 1){
      exit = 0;
      printf("Ask for the quantity of the book, remember that should be less than or equal to what is available\n");
      scanf("%d", &ask_quantity);
    }else {
      exit = 1;printf("It's our pleasure that you did the shopping from us, Do visit us again\n");
    }
  }
  return 0;
}
