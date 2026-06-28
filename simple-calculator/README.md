# Simple Calculator

A command-line calculator program written in C. It supports several basic operations through an interactive menu.

## Features

- **Addition** — add multiple numbers in a row
- **Subtraction** — subtract multiple numbers in a row
- **Multiplication** — multiply multiple numbers in a row
- **Division** — divide multiple numbers in a row
- **Trigonometry (sin / cos / tan)** — compute values from an angle in degrees
- **Factorial** — compute n! for multiple values in a row

## Requirements

- A C compiler such as `gcc`
- The math library `math.h` (must be linked with `-lm` when compiling)

## Compile

```bash
gcc calculator.c -o calculator -lm
```

> Note: You must include `-lm` to link the math library, otherwise `sin`, `cos`, and `tan` will fail to compile.

## Usage

Run the program:

```bash
./calculator
```

You'll see the main menu:

```
=====================================================
		SIMPLE CALCULATOR
		-----------------
[1] Addition (+) 	|	 [2] Subtraction (-)
[3] Multiplication (*) 	|	 [4] Division (/)
[5] sin cos tan 	|	 [6] factorial (!)
[10] Exit
=====================================================
```

Type the number of the menu item you want and press Enter.

### Addition / Subtraction / Multiplication / Division

Enter one number at a time, then type `=` or `exit` to finish and see the result.

Addition example:

```
> 10
+ 20
+ 5
+ =
Result: 35.0000
```

### sin / cos / tan

Choose a function (1 = sin, 2 = cos, 3 = tan), then enter the value in **degrees**. The program converts it to radians automatically.

```
[1] sin | [2] cos | [3] tan
Enter your choice: 1
Enter your degree: 30
sin(30.0000) = 0.5000
```

### Factorial

Enter a number to compute n!. You can keep entering numbers; type `exit` to stop.

```
factorial of 5
= 120.0000
factorial of exit
```

## Code Structure

| Function | Purpose |
|---|---|
| `showCalculatorMenu()` | Display the main menu |
| `showSinCosTanMenu()` | Display the trigonometry menu |
| `addition()` | Perform addition |
| `subtraction()` | Perform subtraction |
| `multiplication()` | Perform multiplication |
| `division()` | Perform division |
| `sinCosTan()` | Compute sin / cos / tan |
| `factorial()` | Compute factorial |
| `main()` | Entry point; shows the menu and calls the selected function |

## Known Issues / Notes

The code works, but a few things should be fixed for correctness and safety:

1. **The `result` variable is not initialized in `addition()`** — it should start as `double result = 0;`, otherwise the sum may be wrong because it uses a garbage value.
2. **`|` (bitwise OR) is used instead of `||` (logical OR)** in the condition checks, e.g. `strcmp(...) == 0 | strcmp(...) == 0` — this should be `||` for correct logical OR behavior.
3. **No division-by-zero check** in the `division()` function.
4. **Factorial uses `atof` and loops with a floating-point value** — an integer would be more appropriate; consider using `atoi` and validating for negative input.

## License

Add a license as you see fit (e.g. MIT), or remove this section.