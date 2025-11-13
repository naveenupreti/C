#include <stdio.h>

int main() {

    /***************************************************************
     * METHOD 1: Using 2D Character Array
     * ----------------------------------
     * - Stores all strings contiguously in memory.
     * - Each row can hold up to 15 characters (14 + '\0').
     * - Strings can be modified.
     ***************************************************************/
    char months1[12][15] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("=== Months using 2D Character Array ===\n");
    for (int i = 0; i < 12; i++)
        printf("%s\n", months1[i]);

    // Display memory information
    printf("\n[2D Array Memory Info]\n");
    printf("Total size of months1 = %u bytes\n", sizeof(months1));
    printf("Size of one row (one string) = %u bytes\n", sizeof(months1[0]));

    // Modifying one of the strings is allowed
    months1[0][0] = 'M';  // "January" ? "Manuary"
    printf("After modification: months1[0] = %s\n", months1[0]);


    /***************************************************************
     * METHOD 2: Using Array of String Pointers
     * ----------------------------------------
     * - Each element stores the address of a string literal.
     * - String literals are stored in read-only memory.
     * - Strings cannot be modified.
     ***************************************************************/
    char *months2[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("\n=== Months using Array of String Pointers ===\n");
    for (int i = 0; i < 12; i++)
        printf("%s\n", months2[i]);

    // Display memory information
    printf("\n[Array of Pointers Memory Info]\n");
    printf("Total size of months2 = %u bytes\n", sizeof(months2));
    printf("Size of one pointer = %u bytes\n", sizeof(months2[0]));

    // Trying to modify a string literal would cause an error
    // months2[0][0] = 'M'; // ? ERROR: read-only memory

    return 0;
}
