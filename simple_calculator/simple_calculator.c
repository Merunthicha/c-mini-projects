#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main (void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    add(a, b);
    subtract(a, b);
    multiply(a, b);
    divide(a, b);

    return 0;
}

int add(int a, int b) {
    int result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    return result;
}
int subtract(int a, int b) {
    int result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    return result;
}
int multiply(int a, int b) {
    int result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    return result;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: number 2 do not be 0\n");
        return 0;
    }
    float result = (float)a / (float)b;
    printf("%d / %d = %f\n", a, b, result);
    return result;
}