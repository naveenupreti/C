/* ============================================================
   1. DOCUMENTATION SECTION
   Purpose: Tells who wrote the program, what it does, and how it works.
   ============================================================ */

/*
   Program: Basic Structure of a C Program
   Purpose: Demonstrate different sections of a C program
*/


/* ============================================================
   2. LINKING SECTION
   Purpose: Connects header files so the program can use built-in functions like printf().
   ============================================================ */

#include <stdio.h>


/* ============================================================
   3. DEFINITION SECTION
   Purpose: Defines constants and macro substitutions that are replaced before compilation.
   ============================================================ */

/*
   #define creates a macro.
   PI is replaced by 3.14159 by the preprocessor
   before the actual compilation begins.
*/

#define PI 3.14159


/* ============================================================
   4. GLOBAL VARIABLE / GLOBAL CONSTANT DECLARATION
   Purpose: Declares variables and constants that every function in this file can access.
   ============================================================ */

/*
   A global variable is declared outside all functions.
   It can be accessed by all functions in this file.
*/

int globalVariable = 10;


/*
   const creates a read-only variable.

   Since this declaration is outside all functions,
   MAX_MARKS is a GLOBAL CONSTANT.

   MAX_MARKS can be READ but cannot be MODIFIED.
*/

const int MAX_MARKS = 100;


/* ============================================================
   5. FUNCTION PROTOTYPES
   Purpose: Informs the compiler in advance about custom functions, their return types, and arguments.
   ============================================================ */

void displayNumber(void);
float calculateArea(float radius);


/* ============================================================
   6. main() FUNCTION
   Purpose: The mandatory entry point where the operating system begins running the program.
   ============================================================ */

int main(void)
{
    float radius = 10.0;
    // radius is a local variable.
    // It can be accessed only inside main().

    printf("In main(), globalVariable = %d\n", globalVariable);
    // Output: In main(), globalVariable = 10

    printf("Maximum marks = %d\n", MAX_MARKS);
    // Output: Maximum marks = 100

    printf("PI = %.5f\n", PI);
    // Output: PI = 3.14159

    displayNumber();

    printf("Area of circle = %.2f\n", calculateArea(radius));
    // Output: Area of circle = 314.16

    return 0;
}


/* ============================================================
   7. USER-DEFINED FUNCTIONS
   Purpose: Contains the actual logic and code bodies for the custom functions declared earlier.
   ============================================================ */

void displayNumber(void)
{
    /*
       globalVariable is accessible here because it is global.

       Therefore, its value can be changed.
    */

    globalVariable = 20;

    printf("Inside displayNumber(), globalVariable = %d\n",
           globalVariable);
    // Output: Inside displayNumber(), globalVariable = 20

    /*
       MAX_MARKS is also accessible here because it is global.

       But this is NOT allowed:

       MAX_MARKS = 90;       // ERROR

       Why?
       Because MAX_MARKS was declared using const.
    */

    printf("Inside displayNumber(), MAX_MARKS = %d\n", MAX_MARKS);
    // Output: Inside displayNumber(), MAX_MARKS = 100
}


float calculateArea(float radius)
{
    /*
       PI is a #define macro and can be used here.
    */

    return PI * radius * radius;
}
