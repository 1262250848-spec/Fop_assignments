#include <stdio.h>

int main() {
    int choice, a, b, i, fact = 1;
    float result;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Division\n5. Power\n6. Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a + b);
            break;
        case 2:
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a - b);
            break;
        case 3:
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a * b);
            break;
        case 4:
            scanf("%d %d", &a, &b);
            if (b != 0)
                printf("Result = f\n", (float)a / b);
            else
                printf("Division by zero not allowed\n");
            break;
        case 5:
            scanf("%d %d", &a, &b);
            result = 1;
            for (i = 1; i <= b; i++)
                result *= a;
            printf("Result = f\n", result);
            break;
        case 6:
            scanf("%d", &a);
            for (i = 1; i <= a; i++)
                fact *= i;
            printf("Factorial = %d\n", fact);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}