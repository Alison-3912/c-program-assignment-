#include <stdio.h>

int main() {
    float height;
    double bank_balance;
    long long phone_number;

    // Prompt the user
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance: ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);

    // Display the input
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: $%.2lf\n", bank_balance);
    printf("Phone Number: %lld\n", phone_number);

    return 0;
}
