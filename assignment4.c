#include <stdio.h>

int main() {
    float basicPay, hra, ta, gSalary, tax, netSalary;

    printf("Enter Basic Pay: ");
    scanf("%f", &basicPay);
    hra = 0.10 * basicPay;
    ta  = 0.05 * basicPay;
    gSalary = basicPay + hra + ta;
    tax = 0.02 * gSalary;
    netSalary = gSalary - tax;
    printf("Net Salary       = %.2f\n", netSalary);
    return 0;
}