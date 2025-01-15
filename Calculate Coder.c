#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Menu:\n");
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) Trigonometry\n");
    printf("6) Inverse Trigonometry\n");
    printf("7) Logarithm or ln\n");
    printf("8) Percentage\n");
    printf("9) Power\n");
    printf("10) Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case 4:
            printf("Enter two numbers (dividend then divisor): ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            printf("Enter an angle in radians: ");
            scanf("%lf", &num1);
            result = sin(num1);
            printf("Sine: %lf\n", result);
            result = cos(num1);
            printf("Cosine: %lf\n", result);
            result = tan(num1);
            printf("Tangent: %lf\n", result);
            break;
        case 6:
            printf("Enter a value for inverse trigonometry: ");
            scanf("%lf", &num1);
            result = asin(num1);
            printf("Arcsine: %lf\n", result);
            result = acos(num1);
            printf("Arccosine: %lf\n", result);
            result = atan(num1);
            printf("Arctangent: %lf\n", result);
            break;
        case 7:
            printf("Enter a number for logarithm calculation: ");
            scanf("%lf", &num1);
            result = log(num1);
            printf("Natural logarithm (ln): %lf\n", result);
            result = log10(num1);
            printf("Logarithm (base 10): %lf\n", result);
            break;
        case 8:
            printf("Enter the total and the percentage: ");
            scanf("%lf %lf", &num1, &num2);
            result = (num1 * num2) / 100;
            printf("Percentage: %lf\n", result);
            break;
        case 9:
            printf("Enter the base and the exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Power: %lf\n", result);
            break;
        case 10:
            printf("Enter the number and the root value: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0) {
                result = pow(num1, 1/num2);
                printf("Root: %lf\n", result);
            } else {
                printf("Error: Root value cannot be zero\n");
            }
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 10.\n");
            break;
    }

    return 0;
}

