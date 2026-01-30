#include <stdio.h>

float calculateTax(float salary) {
    float tax = 0;

    if (salary <= 200000) {
        tax = 0;
    }
    else if (salary <= 500000) {
        tax = (salary - 200000) * 0.05;
    }
    else {
        tax = (300000 * 0.05) + (salary - 500000) * 0.20;
    }

    return tax;
}

int main() {
    float salary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Income Tax = %.2f", calculateTax(salary));

    return 0;
}