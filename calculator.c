#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Pocket Calculator\n");
    printf("Solve a Problem! (e.g., 2 + 2): ");
    
    // Read user input
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with error code
    }

    // Display result
    printf("Result: %lf\n", result);

    return 0;
}
