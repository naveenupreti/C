
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    DEMONSTRATION OF 12 STRING FUNCTIONS

    Learning order:
    1. strlen()  - Find string length.
    2. strcpy()  - Copy a string.
    3. strcat()  - Join two strings.
    4. strcmp()  - Compare two strings.
    5. strrev()  - Reverse a string.
    6. strupr()  - Convert to uppercase.
    7. strlwr()  - Convert to lowercase.
    8. strchr()  - Find the first occurrence of a character.
    9. strrchr() - Find the last occurrence of a character.
   10. strstr()  - Search for a substring.
   11. strtok()  - Divide a string into tokens.
   12. strncmp() - Compare a limited number of characters.

    Note:
    strrev(), strupr() and strlwr() are not standard C
    library functions. We implement their behaviour below.
*/


/* Reverse a string by exchanging characters from both ends. */
void demo_strrev(char str[])
{
    int left = 0;
    int right = (int)strlen(str) - 1;
    char temp;

    // Swap characters until the two positions meet.
    while (left < right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}


/* Convert lowercase English letters to uppercase. */
void demo_strupr(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        // Convert the current character to uppercase.
        str[i] = (char)toupper((unsigned char)str[i]);
    }
}


/* Convert uppercase English letters to lowercase. */
void demo_strlwr(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        // Convert the current character to lowercase.
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}


int main(void)
{
    // Arrays used to demonstrate string operations.
    char str1[50] = "Hello";
    char copy[100];
    char joined[100] = "";

    char searchText[] = "banana";
    char sentence[] = "C programming is interesting";
    char tokenText[] = "Red,Green,Blue";

    char *p;
    int result;

    printf("================================================\n");
    printf("       DEMONSTRATION OF 12 STRING FUNCTIONS\n");
    printf("================================================\n");


    /*------------------------------------------------------
      1. strlen() - Find the length of a string.

      strlen() counts characters before '\0'.
      The terminating null character is not counted.
    ------------------------------------------------------*/
    printf("\n1. strlen() - STRING LENGTH\n");

    printf("String          : %s\n", str1);

    // Cast the returned size_t value to int for %d.
    printf("Length          : %d\n", (int)strlen(str1));


    /*------------------------------------------------------
      2. strcpy() - Copy one string into another.

      The destination must have sufficient space.
      strcpy() copies the terminating '\0' as well.
    ------------------------------------------------------*/
    printf("\n2. strcpy() - STRING COPYING\n");

    strcpy(copy, str1);

    printf("Source string   : %s\n", str1);
    printf("Copied string   : %s\n", copy);


    /*------------------------------------------------------
      3. strcat() - Append one string to another.

      strcat() appends the source to the destination.
      The destination must have sufficient free space.
    ------------------------------------------------------*/
    printf("\n3. strcat() - STRING CONCATENATION\n");

    strcpy(joined, "Hello ");

    printf("Before strcat() : %s\n", joined);

    strcat(joined, "World");

    printf("After strcat()  : %s\n", joined);


    /*------------------------------------------------------
      4. strcmp() - Compare two complete strings.

      Returns zero if equal, negative if the first string
      is smaller, or positive if it is greater.
    ------------------------------------------------------*/
    printf("\n4. strcmp() - STRING COMPARISON\n");

    result = strcmp("cat", "cat");
    printf("Compare cat, cat : %d\n", result);

    result = strcmp("abc", "abd");
    printf("Compare abc, abd : %d\n", result);


    /*------------------------------------------------------
      5. strrev() - Reverse a string.

      This is our user-defined implementation because
      strrev() is not part of standard C.
    ------------------------------------------------------*/
    printf("\n5. strrev() - STRING REVERSAL\n");

    strcpy(str1, "Hello");

    printf("Before reversal : %s\n", str1);

    demo_strrev(str1);

    printf("After reversal  : %s\n", str1);


    /*------------------------------------------------------
      6. strupr() - Convert to uppercase.

      This behaviour is demonstrated by demo_strupr().
    ------------------------------------------------------*/
    printf("\n6. strupr() - UPPERCASE CONVERSION\n");

    strcpy(str1, "Hello World");

    printf("Before          : %s\n", str1);

    demo_strupr(str1);

    printf("After           : %s\n", str1);


    /*------------------------------------------------------
      7. strlwr() - Convert to lowercase.

      This behaviour is demonstrated by demo_strlwr().
    ------------------------------------------------------*/
    printf("\n7. strlwr() - LOWERCASE CONVERSION\n");

    strcpy(str1, "HELLO WORLD");

    printf("Before          : %s\n", str1);

    demo_strlwr(str1);

    printf("After           : %s\n", str1);


    /*------------------------------------------------------
      8. strchr() - Find the first occurrence of a character.

      Returns a pointer to the first matching character,
      or NULL if the character is not found.
    ------------------------------------------------------*/
    printf("\n8. strchr() - FIRST CHARACTER OCCURRENCE\n");

    printf("Original string : %s\n", searchText);

    p = strchr(searchText, 'a');

    if (p != NULL)
    {
        printf("Found character : %c\n", *p);
        printf("String from it  : %s\n", p);

        // Pointer subtraction gives the character index.
        // Cast to int so that %d can print the result.
        printf("Index           : %d\n",
               (int)(p - searchText));
    }
    else
    {
        printf("Character not found.\n");
    }


    /*------------------------------------------------------
      9. strrchr() - Find the last occurrence of a character.

      Returns a pointer to the last matching character,
      or NULL if the character is not found.
    ------------------------------------------------------*/
    printf("\n9. strrchr() - LAST CHARACTER OCCURRENCE\n");

    printf("Original string : %s\n", searchText);

    p = strrchr(searchText, 'a');

    if (p != NULL)
    {
        printf("Found character : %c\n", *p);
        printf("String from it  : %s\n", p);

        printf("Index           : %d\n",
               (int)(p - searchText));
    }
    else
    {
        printf("Character not found.\n");
    }


    /*------------------------------------------------------
      10. strstr() - Search for a substring.

      A substring is a sequence of consecutive characters.
      Returns a pointer to its first occurrence, or NULL.
    ------------------------------------------------------*/
    printf("\n10. strstr() - SUBSTRING SEARCH\n");

    printf("Original string : %s\n", sentence);

    p = strstr(sentence, "is");

    if (p != NULL)
    {
        printf("String from match: %s\n", p);

        printf("Starting index   : %d\n",
               (int)(p - sentence));
    }
    else
    {
        printf("Substring not found.\n");
    }


    /*------------------------------------------------------
      11. strtok() - Split a string into tokens.

      A delimiter separates tokens.
      strtok() modifies the original string by replacing
      delimiters with '\0'.
    ------------------------------------------------------*/
    printf("\n11. strtok() - STRING TOKENIZATION\n");

    printf("Original string : %s\n", tokenText);

    // The first call supplies the string and delimiter.
    p = strtok(tokenText, ",");

    while (p != NULL)
    {
        printf("Token           : %s\n", p);

        // NULL tells strtok() to continue with the same string.
        p = strtok(NULL, ",");
    }


    /*------------------------------------------------------
      12. strncmp() - Compare at most n characters.

      Returns zero if the compared portions match.
      A nonzero result indicates their character ordering.
    ------------------------------------------------------*/
    printf("\n12. strncmp() - LIMITED STRING COMPARISON\n");

    result = strncmp("apple", "application", 3);
    printf("Compare first 3 characters : %d\n", result);

    result = strncmp("apple", "apply", 4);
    printf("Compare first 4 characters : %d\n", result);

    result = strncmp("apple", "apply", 5);
    printf("Compare first 5 characters : %d\n", result);


    printf("\n================================================\n");
    printf("            DEMONSTRATION COMPLETED\n");
    printf("================================================\n");

    return 0;
}
