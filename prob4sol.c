#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);

    swap(&num1, &num2); // Call by reference: pass the addresses

    printf("\nAfter Swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a; // Store the value at address 'a' in temp
    *a = *b;     // Put the value at address 'b' into address 'a'
    *b = temp;     // Put the value from temp (originally at 'a') into address 'b'
}
