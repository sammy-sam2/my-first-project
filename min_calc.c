/* * Program: Simple Calculator
 * Author: [Your Name]
 * Description: Performs basic math operations based on user input.
 */

#include <stdio.h>

int main() {
    // Variables to store user input and the math result
    char operator;
    double num1, num2, result;

    printf("--- Simple Calculator ---\n");

    // 1. Get the operator from the user
    // The space before %c helps skip any leftover 'Enter' keys in the buffer
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // 2. Get the two numbers for the calculation
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // 3. Decision Logic: Determine which math operation to perform
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
            // Safety check: Division by zero causes a crash/error
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Cannot divide by zero!\n");
                return 1; // Exit program with an error code
            }
            break;
        default:
            // Handle cases where the user types a random key like 'z' or '@'
            printf("Error: Invalid operator chosen.\n");
            return 1;
    }

    // 4. Output the final result formatted to 2 decimal places
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0; // Success!
}