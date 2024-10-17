#include <stdio.h>

// Define the structure Complex
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    // Input second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    // Add the two complex numbers
    sum = addComplex(num1, num2);

    // Display the sum
    printf("\nSum of the two complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
