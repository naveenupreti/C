// Array of String Pointers
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char *arr[] = {"Naveen", "Chandra", "Upreti"};

    // Total memory occupied by the array of pointers
    printf("sizeof(arr) = %zu bytes\n", sizeof(arr));

    // Memory occupied by each pointer
    printf("\nPointer array elements:\n");

    for (i = 0; i < 3; i++)
    {
        printf("arr[%d] = %s, sizeof(arr[%d]) = %zu bytes\n",
               i, arr[i], i, sizeof(arr[i]));
    }

    // Actual string lengths and storage sizes
    printf("\nActual string storage sizes:\n");

    for (i = 0; i < 3; i++)
    {
        printf("String \"%s\": length = %zu, bytes = %zu\n",
               arr[i], strlen(arr[i]), strlen(arr[i]) + 1);
    }

    // Total bytes required for all string characters,
    // including each terminating null character
    size_t totalStringBytes = 0;

    for (i = 0; i < 3; i++)
    {
        totalStringBytes += strlen(arr[i]) + 1;
    }

    printf("\nTotal pointer array size = %zu bytes\n", sizeof(arr));
    printf("Total string storage size = %zu bytes\n", totalStringBytes);
    printf("Combined size = %zu bytes\n",
           sizeof(arr) + totalStringBytes);

    return 0;
}
/*

How is the total calculated?
Item	Calculation	Bytes
Pointer array	3 × 4	12
"Naveen"	6 + 1 for '\0'	7
"Chandra"	7 + 1 for '\0'	8
"Upreti"	6 + 1 for '\0'	7
Total string characters	7 + 8 + 7	22
Combined total	12 + 22	34

*/

/*
Output on a 32 bit system:
sizeof(arr) = 12 bytes

Pointer array elements:
arr[0] = Naveen, sizeof(arr[0]) = 4 bytes
arr[1] = Chandra, sizeof(arr[1]) = 4 bytes
arr[2] = Upreti, sizeof(arr[2]) = 4 bytes

Actual string storage sizes:
String "Naveen": length = 6, bytes = 7
String "Chandra": length = 7, bytes = 8
String "Upreti": length = 6, bytes = 7

Total pointer array size = 12 bytes
Total string storage size = 22 bytes
Combined size = 34 bytes
*/
