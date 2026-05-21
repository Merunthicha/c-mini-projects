#include <stdio.h> // Standard Input Output

/* @author Merunthicha 

* Telegram: @Merunthicha

*/

/*
# int - Integer
such as 1, 2, 5, 99, 100
Specifier: %d
*/ 
int int_number = 10;

/*
# float - Maximum 6-7 decimal places
such as 3.1415926, 7.45454, 0.5
Specifier: %f
*/
float float_number = 67.676767;

/*
# double - Maximum 15 decimal places
such as 0.123456789123456, 3.141592653589793, 9.87654321
Specifier: %lf
*/
double double_number = 3.141592653589793; 

/*
# char - Single letter
such as A, B, C, x, h
Specifier: %s
*/
char char_single_letter = 'A'; // Use ' ' because it's a single character.

/*
# char - Multiple letters
such as Merr, Merunthicha, Loves, Milk
Specifier: %c
*/
char char_multiple_letters[20] = "Merr"; // [ ] after the variable to specify the length.
// This means that a maximum of 19 characters can be stored, because the C language must leave the last space free to store the null terminator (\0).

int main() {
    // Calling `int` based on a specifier so that `printf` displays the integer.
    printf("Int = %d\n", int_number); // Output: Int = 10

    // Calling `float` based on a specifier so that `printf` displays the number with decimal.
    printf("Float = %f\n", float_number); // Output: Float = 67.676765
    // And you can also set the number of decimal places using .(number)f%.
    printf("Float = %.3f\n", float_number); // Output: Float = 67.677

    // Calling `double` based on a specifier so that `printf` displays the number with maximum 15 decimal.
    printf("Double = %lf\n", double_number); // Output: Double = 3.141593
    // And you can also set the number of decimal places using .(number)lf%.
    printf("Double = %.15lf\n", double_number); // Output: Double = 3.141592653589793

    // Calling `char` based on a specifier so that `printf` displays the single letter.
    printf("Char = %c\n", char_single_letter); // Output: Char = A

    // Calling `char` based on a specifier so that `printf` displays the multiple letters.
    printf("Char = %s\n", char_multiple_letters); // Output: Char = Merr

    return 0;
}