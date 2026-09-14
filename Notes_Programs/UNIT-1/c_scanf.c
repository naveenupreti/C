// scanf() returns the number of input items successfully read and assigned.
/*
| Rule                                                        | Example                    |
| ----------------------------------------------------------- | -------------------------- |
| 1. `scanf()` needs the address of ordinary variables        | `scanf("%d", &x);`         |
| 2. Match format specifier with variable type                | `%d` -> `int`               |
| 3. `double` uses `%lf` in `scanf()`                         | `scanf("%lf", &d);`        |
| 4. Put a space before `%c` when you want to skip whitespace | `scanf(" %c", &ch);`       |
| 5. Multiple values can be read together                     | `scanf("%d %f", &i, &f);`  |
| 6. `%s` doesn't need `&` for a character array              | `scanf("%19s", name);`     |
| 7. `%i` detects decimal/octal/hexadecimal                   | `scanf("%i", &x);`         |
| 8. Check the return value for input validation              | `if (scanf("%d",&x) == 1)` |

*/
#include <stdio.h>

int main()
{
    int n;

    // ============================================================
    // 1. Basic scanf() - reading an integer
    // ============================================================

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    // %d  -> expects an int
    // &age -> address of age
    // scanf() stores the entered value at this address.

    printf("Age = %d\n", age);


    // ============================================================
    // 2. Reading a character
    // ============================================================

    char ch;

    printf("\nEnter a character: ");
    scanf(" %c", &ch);
    // %c -> reads one character
    // Space before %c tells scanf() to skip whitespace
    // such as spaces, tabs and newlines.

    printf("Character = %c\n", ch);


    // ============================================================
    // 3. Reading a float
    // ============================================================

    float f;

    printf("\nEnter a float: ");
    scanf("%f", &f);
    // float with scanf() -> %f

    printf("Float = %f\n", f);


    // ============================================================
    // 4. Reading a double
    // ============================================================

    double d;

    printf("\nEnter a double: ");
    scanf("%lf", &d);
    // double with scanf() -> %lf
    // IMPORTANT:
    // scanf("%lf", &d)  -> correct
    // scanf("%f", &d)   -> WRONG

    printf("Double = %f\n", d);
    // In printf(), double is printed using %f.


    // ============================================================
    // 5. Reading long double
    // ============================================================

    long double ld;

    printf("\nEnter a long double: ");
    scanf("%Lf", &ld);
    // long double with scanf() -> %Lf

    printf("Long double = %Lf\n", ld);


    // ============================================================
    // 6. Reading multiple values in one scanf()
    // ============================================================

    int a, b;

    printf("\nEnter two integers: ");
    scanf("%d %d", &a, &b);
    // First %d  -> stores input in a
    // Second %d -> stores input in b
    //
    // Input can be:
    // 10 20
    //
    // OR:
    // 10
    // 20

    printf("a = %d, b = %d\n", a, b);


    // ============================================================
    // 7. Reading different data types together
    // ============================================================

    int i;
    float x;
    double y;
    char grade;

    printf("\nEnter int, float, double and character: ");

    scanf("%d %f %lf %c",
          &i, &x, &y, &grade);
    // %d  -> int
    // %f  -> float
    // %lf -> double
    // %c  -> char
    //
    // The variables must appear in the SAME ORDER
    // as their format specifiers.

    printf("int    = %d\n", i);
    printf("float  = %f\n", x);
    printf("double = %f\n", y);
    printf("char   = %c\n", grade);


    // ============================================================
    // 8. %d vs %i
    // ============================================================

    int p, q, r;

    printf("\nEnter decimal number using %%i: ");
    scanf("%i", &p);
    // %i in scanf() automatically detects the number base.
    //
    // 25   -> decimal 25
    // 025  -> octal 25 = decimal 21
    // 0x25 -> hexadecimal 25 = decimal 37

    printf("Value = %d\n", p);


    printf("\nEnter another integer using %%d: ");
    scanf("%d", &q);
    // %d in scanf() expects a decimal integer.

    printf("Value = %d\n", q);


    // ============================================================
    // 9. Reading an octal number explicitly
    // ============================================================

    printf("\nEnter an octal number: ");
    scanf("%o", &r);
    // %o -> input is interpreted as octal.

    printf("Decimal value = %d\n", r);


    // ============================================================
    // 10. Reading a hexadecimal number explicitly
    // ============================================================

    int h;

    printf("\nEnter a hexadecimal number: ");
    scanf("%x", &h);
    // %x -> input is interpreted as hexadecimal.
    //
    // Example input:
    // 25
    // or
    // 0x25

    printf("Decimal value = %d\n", h);


    // ============================================================
    // 11. Reading a string using %s
    // ============================================================

    char name[20];

    printf("\nEnter your name: ");
    scanf("%19s", name);
    // %s -> reads a string.
    //
    // IMPORTANT:
    // No & is used with name.
    // name already represents the address of its first element.
    //
    // %19s means:
    // Read at most 19 characters.
    // The 20th position is reserved for '\0'.

    printf("Name = %s\n", name);


    // ============================================================
    // 12. %s stops at whitespace
    // ============================================================

    char word[20];

    printf("\nEnter a word: ");
    scanf("%19s", word);

    printf("Word = %s\n", word);

    // If the user enters:
    //
    // Hello World
    //
    // scanf("%19s", word) reads only:
    //
    // Hello
    //
    // because %s stops reading when it encounters whitespace.


    // ============================================================
    // 13. Reading a character after an integer
    // ============================================================

    int number;
    char letter;

    printf("\nEnter an integer and a character: ");

    scanf("%d", &number);

    scanf(" %c", &letter);
    // The space before %c is important.
    //
    // After entering the integer and pressing ENTER,
    // a newline remains in the input stream.
    //
    // " %c" tells scanf() to skip whitespace before
    // reading the character.

    printf("Number = %d\n", number);
    printf("Letter = %c\n", letter);


    // ============================================================
    // 14. scanf() RETURN VALUE
    // ============================================================

    int v1, v2;

    printf("\nEnter two integers: ");

    n = scanf("%d %d", &v1, &v2);
    // scanf() returns the NUMBER OF VALUES
    // successfully read and assigned.
    //
    // If input is:
    // 10 20
    //
    // n = 2

    printf("Values successfully read = %d\n", n);


    // ============================================================
    // 15. scanf() return value when input is invalid
    // ============================================================

    int num1, num2;

    printf("\nEnter an integer followed by another integer: ");

    n = scanf("%d %d", &num1, &num2);

    // Suppose the user enters:
    //
    // 10 abc
    //
    // First %d successfully reads 10.
    // Second %d cannot read "abc".
    //
    // Therefore:
    // n = 1

    printf("Values successfully read = %d\n", n);


    // ============================================================
    // 16. Checking scanf() return value
    // ============================================================

    int marks;

    printf("\nEnter your marks: ");

    if (scanf("%d", &marks) == 1)
    {
        printf("Valid integer entered = %d\n", marks);
    }
    else
    {
        printf("Invalid input!\n");
    }


    // ============================================================
    // 17. Reading unsigned integer
    // ============================================================

    unsigned int positive;

    printf("\nEnter an unsigned integer: ");
    scanf("%u", &positive);
    // %u -> unsigned int

    printf("Unsigned value = %u\n", positive);


    // ============================================================
    // 18. Reading short integer
    // ============================================================

    short s;

    printf("\nEnter a short integer: ");
    scanf("%hd", &s);
    // %hd -> short int

    printf("Short value = %hd\n", s);


    // ============================================================
    // 19. Reading long integer
    // ============================================================

    long l;

    printf("\nEnter a long integer: ");
    scanf("%ld", &l);
    // %ld -> long int

    printf("Long value = %ld\n", l);


    // ============================================================
    // 20. Reading long long integer
    // ============================================================

    long long ll;

    printf("\nEnter a long long integer: ");
    scanf("%lld", &ll);
    // %lld -> long long int

    printf("Long long value = %lld\n", ll);


    // ============================================================
    // 21. Suppressing input using *
    // ============================================================

    int first, second;

    printf("\nEnter three integers: ");

    scanf("%d %*d %d", &first, &second);
    // %*d means:
    // Read an integer but DO NOT store it.
    //
    // Input:
    // 10 20 30
    //
    // first  = 10
    // 20     = read but discarded
    // second = 30

    printf("First  = %d\n", first); 
    printf("Second = %d\n", second); 


    // ============================================================
    // 22. Width with integer input
    // ============================================================

    int limited;

    printf("\nEnter a number: ");

    scanf("%3d", &limited);
    // %3d means scanf() reads at most 3 characters
    // for this integer conversion.
    //
    // If input is:
    // 12345
    //
    // only 123 is consumed by this conversion.


    printf("Value read = %d\n", limited);


    // ============================================================
    // 23. Important: scanf() does NOT automatically validate
    // the whole input
    // ============================================================

    int value;

    printf("\nEnter an integer: ");

    n = scanf("%d", &value);

    if (n == 1)
    {
        printf("Integer read = %d\n", value);
    }
    else
    {
        printf("Input was not a valid integer.\n");
    }


    // ============================================================
    // END
    // ============================================================

    return 0;
}
