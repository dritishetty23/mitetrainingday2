#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main() {
    char str[100]; // Assuming a maximum string length of 99 + null terminator

    printf("Enter a string: ");
    scanf(" %[^\n]s", str); // Reads string with spaces

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}

void reverseString(char *str) {
    int len = 0;
    char *start = str;  // Pointer to the beginning of the string
    char *end = str;    // Pointer to the beginning of the string

    // Find the length of the string
    while (*end != '\0') {
        len++;
        end++;
    }
    end--; // Point to the last character (not the null terminator)

    // Reverse the string using pointers
    while (start < end) {
        // Swap characters at start and end
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
}
