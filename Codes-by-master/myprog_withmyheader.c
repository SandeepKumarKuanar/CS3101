//gcc -o myprogout myprog_withmyheader.c mathfunc.c

#include <stdio.h>
#include "mathfunc.h"   // My header

int main() {
    printf("Add: %d\n", add(5, 3));
    printf("Divide: %.2f\n", divide(10, 2));
    return 0;
}

