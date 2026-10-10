/*
The ctype.h header file in C provides functions to check the type of a character and convert a character from lowercase to uppercase or vice versa.
These functions are particularly useful when processing strings, validating user input, checking digits, and changing the case of characters.
To use these functions, include the header file:
#include <ctype.h>


1. Important functions of ctype.h
The following table covers the most commonly used functions.
Function	Purpose	Example
isalpha(ch)	Checks whether a character is an alphabetic letter	isalpha('A') → true
isdigit(ch)	Checks whether a character is a digit (0–9)	isdigit('5') → true
isalnum(ch)	Checks whether a character is a letter or digit	isalnum('A') → true
islower(ch)	Checks whether a character is a lowercase letter	islower('a') → true
isupper(ch)	Checks whether a character is an uppercase letter	isupper('A') → true
isspace(ch)	Checks for whitespace, such as a space, tab or newline	isspace(' ') → true
ispunct(ch)	Checks whether a character is punctuation	ispunct('!') → true
isprint(ch)	Checks whether a character is printable, including a space	isprint(' ') → true
toupper(ch)	Converts a lowercase letter to uppercase	toupper('a') → 'A'
tolower(ch)	Converts an uppercase letter to lowercase	tolower('A') → 'a'
Important: The is...() functions return zero when the condition is false and a nonzero value when it is true.
They do not necessarily return exactly 1
The conversion functions toupper() and tolower() change the case of letters. 
If the character is not eligible for conversion, they return it unchanged.
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch = 'A';

    // 1. isalpha(): Checks whether the character is an alphabetic letter.
    printf("isalpha('A')   = %d\n", isalpha((unsigned char)'A') != 0);

    // 2. isdigit(): Checks whether the character is a decimal digit.
    printf("isdigit('5')   = %d\n", isdigit((unsigned char)'5') != 0);

    // 3. isalnum(): Checks whether the character is a letter or a digit.
    printf("isalnum('A')   = %d\n", isalnum((unsigned char)'A') != 0);
    printf("isalnum('7')   = %d\n", isalnum((unsigned char)'7') != 0);
    printf("isalnum('@')   = %d\n", isalnum((unsigned char)'@') != 0);

    // 4. islower(): Checks whether the character is a lowercase letter.
    printf("islower('a')   = %d\n", islower((unsigned char)'a') != 0);

    // 5. isupper(): Checks whether the character is an uppercase letter.
    printf("isupper('A')   = %d\n", isupper((unsigned char)'A') != 0);

    // 6. isspace(): Checks for whitespace such as space, tab or newline.
    printf("isspace(' ')   = %d\n", isspace((unsigned char)' ') != 0);
    printf("isspace('\\n')  = %d\n", isspace((unsigned char)'\n') != 0);

    // 7. ispunct(): Checks whether the character is punctuation.
    printf("ispunct('!')   = %d\n", ispunct((unsigned char)'!') != 0);

    // 8. isprint(): Checks whether the character is printable.
    // A space is printable, even though it is not visible as a symbol.
    printf("isprint(' ')   = %d\n", isprint((unsigned char)' ') != 0);

    // 9. toupper(): Converts a lowercase letter to uppercase.
    // The converted character is returned; the original is not modified.
    printf("toupper('a')   = %c\n", toupper((unsigned char)'a'));

    // 10. tolower(): Converts an uppercase letter to lowercase.
    printf("tolower('A')   = %c\n", tolower((unsigned char)'A'));

    // Demonstrating conversion using a variable.
    ch = 'b';
    ch = (char)toupper((unsigned char)ch);  // Store the uppercase result.
    printf("Uppercase ch   = %c\n", ch);

    ch = (char)tolower((unsigned char)ch);  // Store the lowercase result.
    printf("Lowercase ch   = %c\n", ch);

    return 0;
}
/*
Output:
isalpha('A')   = 1
isdigit('5')   = 1
isalnum('A')   = 1
isalnum('7')   = 1
isalnum('@')   = 0
islower('a')   = 1
isupper('A')   = 1
isspace(' ')   = 1
isspace('\n')  = 1
ispunct('!')   = 1
isprint(' ')   = 1
toupper('a')   = A
tolower('A')   = a
Uppercase ch   = B
Lowercase ch   = b
*/