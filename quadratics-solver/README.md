# Quadratic Equation Solver

A simple C program that solves quadratic equations of the form **ax² + bx + c = 0**.
It handles all three cases based on the discriminant: two real roots, one repeated
root, and complex roots.

## How it works

The program computes the discriminant `Δ = b² - 4ac` and determines the roots:

- **Δ > 0** → two distinct real roots
- **Δ = 0** → one repeated real root
- **Δ < 0** → two complex conjugate roots

## Compile & Run

```bash
gcc quadratic.c -o quadratic -lm
./quadratic
```

> Note: the `-lm` flag links the math library (needed for `sqrt`).

## Example

```
==== Equation ====
Ax^2 + Bx + C = 0
==================
Enter value of A: 1
Enter value of B: -5
Enter value of C: 6
Result quadratics equation from 1.0000x^2 + -5.0000x + 6.0000 = 0
x1 = 3.0000
x2 = 2.0000
```