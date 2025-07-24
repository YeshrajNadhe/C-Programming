#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
        case '/': 
            if (b != 0)
                printf("%.2f / %.2f = %.2f\n", a, b, a / b); 
            else
                printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
