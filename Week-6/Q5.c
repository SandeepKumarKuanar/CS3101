/*
Use a LIFO-type data structure named India tour for a tourist group. The group decides to visit some places in order and return in the reverse order. Suppose they start with the Taj Mahal and then visit Delhi, Jaipur, Goa, Kanyakumari, Puducherry, Sunderbans, and Darjeeling. These are stored in the data structure, and you should delete elements from the same to give the tourists the places to be visited in the reverse order, i.e., Darjeeling to Taj Mahal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

// Stack structure using fixed array for places (strings)
char* stack[MAX];
int top = -1;

// Push a new place onto the stack
void push(const char* place) {
    if (top == MAX - 1) {
        printf("Stack overflow: cannot add %s\n", place);
        return;
    }
    stack[++top] = strdup(place);
}

// Pop a place from the stack and return it
char* pop() {
    if (top == -1) {
        printf("Stack underflow: no more places\n");
        return NULL;
    }
    return stack[top--];
}

// Free any allocated memory remaining in stack cleanup
void cleanup() {
    while (top != -1) {
        free(stack[top--]);
    }
}

int main() {
    // Push places in visiting order (start to end)
    push("Taj Mahal");
    push("Delhi");
    push("Jaipur");
    push("Goa");
    push("Kanyakumari");
    push("Puducherry");
    push("Sunderbans");
    push("Darjeeling");

    printf("Tourists visit places in this order:\n");
    // Print forward order (optional)
    for (int i = 0; i <= top; i++) {
        printf("%s\n", stack[i]);
    }

    printf("\nTourists return visiting places in reverse order:\n");
    // Pop and print places in reverse visiting order
    char* place;
    while ((place = pop()) != NULL) {
        printf("%s\n", place);
        free(place);  // free after print to avoid leaks
    }

    // Cleanup in case of early exit (not really needed here)
    cleanup();

    return 0;
}
