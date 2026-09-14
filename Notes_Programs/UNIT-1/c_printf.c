/*
             printf()
                |
       +-----------------+
      Prints output      Returns int
                         |
              Number of characters
              successfully printed
              
printf() returns the number of characters successfully printed.
printf() returns a negative value if an output or encoding error occurred
*/

#include <stdio.h>

int main()
{
    int n;

    // ============================================================
    // 1. Simple printf()
    // ============================================================

    printf("Hello World\n");
    // Output: Hello World
    // printf() displays text on the screen.


    // ============================================================
    // 2. printf() with a variable
    // ============================================================

    int age = 25;

    printf("Age = %d\n", age);
    // Output: Age = 25
    // %d tells printf() that age is an int.


    // ============================================================
    // 3. printf() with multiple variables
    // ============================================================

    int a = 10, b = 20;

    printf("a = %d, b = %d\n", a, b);
    // Output: a = 10, b = 20
    // Each format specifier corresponds to the value after it.


    // ============================================================
    // 4. printf() can print an expression
    // ============================================================

    printf("Sum = %d\n", a + b);
    // Output: Sum = 30
    // printf() evaluates a + b first, then prints the result.


    // ============================================================
    // 5. Different data types
    // ============================================================

    char ch = 'A';
    float f = 12.5f;
    double d = 123.456;
    unsigned int u = 100;

    printf("Character = %c\n", ch);     // %c -> character
    printf("Float     = %f\n", f);      // %f -> floating-point value
    printf("Double    = %f\n", d);      // %f -> double in printf()
    printf("Unsigned  = %u\n", u);      // %u -> unsigned int


    // ============================================================
    // 6. Controlling decimal places
    // ============================================================

    printf("f = %.2f\n", f);
    // Output: f = 12.50
    // .2 means: display 2 digits after the decimal point.

    printf("d = %.3f\n", d);
    // Output: d = 123.456
    // .3 means: display 3 digits after the decimal point.


    // ============================================================
    // 7. Escape sequences
    // ============================================================

    printf("Hello\nWorld\n");
    // \n -> moves the cursor to the next line.

    printf("A\tB\tC\n");
    // \t -> horizontal tab.

    printf("\"Hello\"\n");
    // \" -> prints a double quotation mark.

    printf("C:\\Program Files\\\n");
    // \\ -> prints a backslash.


    // ============================================================
    // 8. Printing a % symbol
    // ============================================================

    printf("Success = 100%%\n");
    // Output: Success = 100%
    // %% is used to print the % character.
    // A single % starts a format specification.


    // ============================================================
    // 9. WIDTH
    // ============================================================

    printf("%10d\n", 25);
    // Output:         25
    // 10 = minimum field width of 10 characters.
    // By default, the value is right-aligned.


    // ============================================================
    // 10. LEFT ALIGNMENT
    // ============================================================

    printf("%-10dEND\n", 25);
    // Output: 25        END
    // - means left-align the value within the field.


    // ============================================================
    // 11. WIDTH with floating-point value
    // ============================================================

    printf("%10.2f\n", 12.5);
    // 10 -> minimum width = 10 characters
    // .2 -> 2 digits after decimal
    // Output:      12.50


    // ============================================================
    // 12. printf() RETURN VALUE
    // ============================================================

    n = printf("Hello");
    // printf() prints Hello.
    // It returns the number of characters successfully printed.
    // H e l l o = 5 characters.
    // Therefore n = 5.

    printf("\nn = %d\n", n);
    // Output:
    // Hello
    // n = 5


    // ============================================================
    // 13. Spaces are also counted
    // ============================================================

    n = printf("Hi Naveen");
    // Characters:
    // H i [space] N a v e e n
    // 2 + 1 + 6 = 9 characters.
    // Therefore n = 9.

    printf("\nCharacters printed = %d\n", n);
    // Output: Characters printed = 9


    // ============================================================
    // 14. Newline is also counted
    // ============================================================

    n = printf("ABC\n");
    // A = 1
    // B = 2
    // C = 3
    // \n = 4
    // Therefore printf() returns 4.

    printf("Return value = %d\n", n);
    // Output:
    // ABC
    // Return value = 4


    // ============================================================
    // 15. Numbers are counted as characters
    // ============================================================

    n = printf("12345");
    // The number-looking text contains 5 characters:
    // '1' '2' '3' '4' '5'
    // Therefore printf() returns 5.

    printf("\nReturn value = %d\n", n);


    // ============================================================
    // 16. printf() with a number
    // ============================================================

    n = printf("%d", 12345);
    // 12345 is printed using %d.
    // The output contains 5 characters.
    // Therefore n = 5.

    printf("\nReturn value = %d\n", n);


    // ============================================================
    // 17. printf() itself can be used inside printf()
    // ============================================================

    printf("Return value = %d\n", printf("ABC"));
    // Inner printf() executes first:
    //     printf("ABC") -> prints ABC and returns 3
    //
    // Outer printf() then prints:
    //     Return value = 3
    //
    // Output:
    // ABCReturn value = 3


    // ============================================================
    // 18. printf() does NOT return the value that it prints
    // ============================================================

    n = printf("25");
    // Screen gets: 25
    // But n gets: 2
    //
    // Why?
    // Because printf() returns the NUMBER OF CHARACTERS printed,
    // not the numerical value being printed.

    printf("\nValue of n = %d\n", n);
    // Output:
    // 25
    // Value of n = 2

     int n = printf("Hello");
     if (n < 0)
         printf("Output error!"); //if something wrong happens; printf, returns a negative value.
     else
         printf("Characters printed = %d", n);
    // ============================================================
    // 19. Printing a string
    // ============================================================

    char name[] = "Naveen";

    printf("Name = %s\n", name);
    // %s -> prints a string.


    // ============================================================
    // 20. Character vs ASCII value
    // ============================================================

    printf("Character = %c\n", ch);
    // %c prints A

    printf("ASCII value = %d\n", ch);
    // %d prints the integer/ASCII value of A.
    // Typically: 65


    return 0;
}
