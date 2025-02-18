#include <stdio.h>
#include <string.h>

float calculateBill(char wardType, int days);

int main() {
    char patientName[50];
    char wardType;
    int days;
    float billBeforeDiscount, discount, finalBill;

    printf("Enter Patient Name: ");
    scanf(" %[^\n]s", patientName); // Reads name with spaces

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);

    printf("Enter Number of Days: ");
    scanf("%d", &days);

    billBeforeDiscount = calculateBill(wardType, days);

    if (days > 7) {
        discount = 0.05 * billBeforeDiscount;
        finalBill = billBeforeDiscount - discount;
    } else {
        discount = 0;
        finalBill = billBeforeDiscount;
    }

    printf("\nPatient Name: %s\n", patientName);
    printf("Total Bill Before Discount: ₹%.2f\n", billBeforeDiscount);
    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Final Bill Amount: ₹%.2f\n", finalBill);

    return 0;
}

float calculateBill(char wardType, int days) {
    float dailyCharge;

    switch (wardType) {
        case 'G':
        case 'g':
            dailyCharge = 1000;
            break;
        case 'S':
        case 's':
            dailyCharge = 2000;
            break;
        case 'P':
        case 'p':
            dailyCharge = 5000;
            break;
        default:
            printf("Invalid ward type entered. Assuming General Ward.\n");
            dailyCharge = 1000; // Default to general ward
            break;
    }

    return dailyCharge * days;
}
