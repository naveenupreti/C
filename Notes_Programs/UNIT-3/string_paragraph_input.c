#include <stdio.h>

int main() {
    char paragraph[500];
    printf("Enter text (end with $):\n");
    scanf("%[^$]", paragraph);
    printf("\nYou entered:\n%s\n", paragraph);
    return 0;
}
