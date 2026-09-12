/* ============================================================
   1. DOCUMENTATION SECTION
   ============================================================ */

/*
   Program: Basic Structure of a C Program
   Purpose: Demonstrate different sections of a C program
*/


/* ============================================================
   2. LINKING SECTION
   ============================================================ */

#include <stdio.h>


/* ============================================================
   3. DEFINITION SECTION
   ============================================================ */

/*
   #define creates a macro.
   PI is replaced by 3.14159 by the preprocessor
   before the actual compilation begins.
*/

#define PI 3.14159


/* ============================================================
   4. GLOBAL VARIABLE / GLOBAL CONSTANT DECLARATION
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
   ============================================================ */

void displayNumber(void);
float calculateArea(float radius);


/* ============================================================
   6. main() FUNCTION. Program execution starts from here
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
    // Output: Area of circle = 78.54

    return 0;
}


/* ============================================================
   7. USER-DEFINED FUNCTIONS
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