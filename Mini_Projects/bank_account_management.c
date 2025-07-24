#include <stdio.h>

float balance = 0.0;

void viewBalance() {
    printf("Your current balance is: ₹%.2f\n", balance);
}

void deposit() {
    float amount;
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("₹%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount <= balance && amount > 0) {
        balance -= amount;
        printf("₹%.2f withdrawn successfully.\n", amount);
    } else {
        printf("Invalid or insufficient balance.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Bank Account Menu ---\n");
        printf("1. View Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1–4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: viewBalance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: printf("Thank you! Visit again.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
