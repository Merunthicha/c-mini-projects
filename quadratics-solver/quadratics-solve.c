#include <stdio.h>
#include <math.h>

void solveQuadratics(double a, double b, double c) {

    if (a == 0) {
        printf("The value of A must not be 0 because It is not quadratics equation.\n");
        return;
    }

    double discriminant, x, x1, x2, realPart, imaginaryPart;
    discriminant = (b * b) - (4 * a * c);

    printf("Result quadratics equation from %.4fx^2 + %.4fx + %.4f = 0\n", a, b, c);
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    } else if (discriminant == 0) {
        x = -b / (2 * a);
        printf("x = %.4f\n", x);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = (sqrt(-discriminant)) / (2 * a);
        printf("x1 = %.4f + %.4fi\n", realPart, imaginaryPart);
        printf("x2 = %.4f - %.4fi\n", realPart, imaginaryPart);
    }

}


int main (void) {

    double a, b, c;
    printf("==== Equation ====\n");
    printf("Ax^2 + Bx + C = 0\n");
    printf("==================\n");

    printf("Enter value of A: ");
    scanf("%lf", &a);
    printf("Enter value of B: ");
    scanf("%lf", &b);
    printf("Enter value of C: ");
    scanf("%lf", &c);
    solveQuadratics(a, b, c);


    return 0;

}