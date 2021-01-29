//Listing 1.1
#include <stdlib.h>
#include <stdio.h>

/* The maint thing that this program does. */
int main(void) {
    // Declarations
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = 0.00007,
    };

    // Doing some work
    for (size_t i = 0; i < 5; i++) {
        printf("element %zu is %g\t its square is %g\n", 
                i,
                A[i],
                A[i]*A[i]);
    }

    return EXIT_SUCCESS;
}