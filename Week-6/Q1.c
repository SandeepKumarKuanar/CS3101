/* Details 
Implement a login interface using a do-while loop, asking a person his/her username and password, and allowing access in case of successful authentication. Assume that you have a known list of usernames in an array: UserNames, and the corresponding passwords (in the same order) in another array: Passwords. That is, array element UserName[i] corresponds to array element Passwords[i]. 

Once the person inputs the username, search for the same in UserNames, and if it matches an element in UserNames, ask for the password, which you search in Passwords. You may use the code of “linear search” on slide number 23 of “Loops” on the WeLearn page for the course.

If the username and password match, print a message ‘Welcome!’ In case of a mismatch, print an appropriate message and ask if the person wants to continue; if yes, ask for the username and password again; else, terminate the loop.

To implement the above, assume the most realistic setup where the names and passwords are strings, and you have a database of usernames and passwords to be stored in a file “Username-Password.txt”. First, construct a structure (using struct) USERIDPASSWORD containing the elements username and password (as strings). Only once, use fwrite() to write 20 username-password pairs of USERIDPASSWORD type variables in Username-Password.txt. Then, to implement the interface, read the file using fread() to retrieve the database, and store it in an array of USERIDPASSWORD, and search in this array.
*/
#include<stdio.h>
#include<string.h>

struct USERIDPASSWORD {
    char username[50];
    char password[50];
};

// ran this once to create the database file
void createDatabase() {
    struct USERIDPASSWORD users[20] = {
        // 20 username-password pairs from AI
        {"alice", "pass123"},
        {"bob", "secret456"},
        {"charlie", "qwerty"},
        {"diana", "password1"},
        {"eve", "secure789"},
        {"frank", "frank123"},
        {"grace", "grace456"},
        {"henry", "henry789"},
        {"iris", "iris000"},
        {"jack", "jack111"},
        {"kate", "kate222"},
        {"leo", "leo333"},
        {"mia", "mia444"},
        {"noah", "noah555"},
        {"olivia", "olivia666"},
        {"peter", "peter777"},
        {"quinn", "quinn888"},
        {"rachel", "rachel999"},
        {"sam", "sam1010"},
        {"tina", "tina1111"}
    };

    FILE *file = fopen("Username-Password.txt", "wb");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    fwrite(users, sizeof(struct USERIDPASSWORD), 20, file);
    fclose(file);
    printf("Database created successfully.\n");
}

int main() {
    // (ran once, at the start)
    // createDatabase();
    // return 0;

    struct USERIDPASSWORD users[20];
    FILE *file = fopen("Username-Password.txt", "rb");
    if (file == NULL) {
        printf("Error opening file. Make sure to create the database first.\n");
        return 1;
    }

    fread(users, sizeof(struct USERIDPASSWORD), 20, file);
    fclose(file);

    char inputUsername[50];
    char inputPassword[50];
    char choice;
    int authenticated = 0;

    // entire login process in do-while loop
    do {
        printf("Enter username: ");
        scanf("%s", inputUsername);

        // Linear search for username, from `linearsearch_string.c` code here.
        int userIndex = -1;
        for (int i = 0; i < 20; i++) {
            if (strcmp(users[i].username, inputUsername) == 0) {
                userIndex = i;
                printf("Found in DataBase!\n");
                break;
            }
        }
        // if username found after linear searching, then break to ask for password

        if (userIndex != -1) {
            printf("Enter password: ");
            scanf("%s", inputPassword);

            if (strcmp(users[userIndex].password, inputPassword) == 0) {
                printf("Welcome!\n");
                authenticated = 1; // for the while loop
                break; // Exit loop after successful login
            } else {
                printf("Incorrect password.\n");
            }
        } else {
            printf("Username not found in Database.\n");
        }

        // ask for retry
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (!authenticated) {
        printf("Login terminated, User haven't signed in.\nProgram terminated.\n");
    }else {
        printf("User successfully signed in.\nProgram terminated.\n");
    }

    return 0;
}