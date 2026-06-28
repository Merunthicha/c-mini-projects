#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979

// Show Menu
void showCalculatorMenu () {
    printf("=====================================================\n");
    printf("\t\tSIMPLE CALCULATOR\n");
    printf("\t\t-----------------\n");
    printf("[1] Addition (+) \t|\t [2] Subtraction (-)\n");
    printf("[3] Multiplication (*) \t|\t [4] Division (/)\n");
    printf("[5] sin cos tan \t|\t [6] factorial (!) \n");
    printf("[10] Exit\n");
    printf("=====================================================\n");

}

// Show Sin Cos Tan Menu
void showSinCosTanMenu () {
    printf("===========================\n");
    printf("[1] sin | [2] cos | [3] tan\n");
    printf("[10] Exit\n");
    printf("===========================\n");
}

// Addition Function
void addition() {
    double result;
    char firstNumber[100], number[100];

    printf("'=' or 'exit' to stop\n");

    printf("> ");
    scanf("%s", firstNumber);
    if (strcmp(firstNumber, "=") == 0 | strcmp(firstNumber, "exit") == 0) {
        return;
    }
    while (1) {
        printf("+ ");
        scanf("%s", number);
        if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
            break;
        }
        result += atof(number);
    }
    printf("Result: %.4f\n", result);
}

// Subtraction Function
void subtraction() {
    double result;
    char number[100];

    printf("'=' or 'exit' to stop\n");

    printf("> ");
    scanf("%s", number);
    if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
        return;
    }
    result = atof(number);
    while (1) {
        printf("- ");
        scanf("%s", number);
        if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
            break;
        }
        result -= atof(number);
    }
    printf("Result: %.4f\n", result);
}

// Multiplication Function
void multiplication() {
    double result;
    char number[100];

    printf("'=' or 'exit' to stop\n");

    printf("> ");
    scanf("%s", number);
    if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
        return;
    }
    result = atof(number);
    while (1) {
        printf("* ");
        scanf("%s", number);
        if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
            break;
        }
        result *= atof(number);
    }
    printf("Result: %.4f\n", result);
}

// Division Function
void division() {
    double result;
    char number[100];

    printf("'=' or 'exit' to stop\n");

    printf("> ");
    scanf("%s", number);
    if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
        return;
    }
    result = atof(number);
    while (1) {
        printf("/ ");
        scanf("%s", number);
        if (strcmp(number, "=") == 0 | strcmp(number, "exit") == 0) {
            break;
        }
        result /= atof(number);
    }
    printf("Result: %.4f\n", result);
}

// sin cos tan
void sinCosTan() {
    int choice;
    double degree;


    showSinCosTanMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter your degree: ");
    scanf("%lf", &degree);

    double radian = degree * PI / 180;

    switch (choice) {
    case 1:
        printf("sin(%.4f) = %.4f\n",degree, sin(radian));
        break;
    case 2:
        printf("cos(%.4f) = %.4f\n",degree, cos(radian));
        break;
    case 3:
        printf("tan(%.4f) = %.4f\n",degree, tan(radian));
        break;
    case 10:
        break;
    
    default:
        break;
    }
}

// Factorial Function
void factorial() {
    char number[100];

    printf("'exit' to stop\n");
    while (1) {
        printf("factorial of ");
        scanf("%s", number);
        if (strcmp(number, "exit") == 0) {
            break;
        }
        double result = 1;
        for (int i = 1; i <= atof(number); i++) {
            result *= i;
        }
        printf("= %.4f\n", result);
    }
    
}

int main (void) {
    // Choice
    int choice;

    showCalculatorMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        sinCosTan();
        break;
    case 6:
        factorial();
        break;
    case 10:
        break;
    
    default:
        break;
    }


    return 0;
}