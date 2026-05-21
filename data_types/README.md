# C Programming: Data Types 

This code is designed to study and understand the basics of data types in the C language and the correct selection of format specifiers.

---

## Author
**Developer:** Merunthicha (Wanvisa Phumam)
**Telegram:** [@Merunthicha](https://t.me/Merunthicha)

---

## Data types summary

| Data Type | Description | Example | Specifier | Precautions/additional |
| :--- | :--- | :--- | :--- | :--- |
| **`int`** | Integer | `10`, `-5`, `100` | `%d` | No decimal places |
| **`float`** | Decimal numbers (6-7 decimal places) | `67.676767` | `%f` | Can be limited to `%.(number)f` |
| **`double`** | High-precision decimal numbers (15 decimal places) | `3.1415926535...` | `%lf` | Suitable for calculations requiring high accuracy |
| **`char` (Single)** | Single character | `'A'`, `'x'` | `%c` | Requires Single Quotes (`' '`) |
| **`char[]` (String)** | Text or multiple characters | `"Merr"` | `%s` | Requires Double Quotes (Double Quotes) (`" "`) and reserve space for the closing remarks (`\0`) |

---

## Output

How to make a file work easily:
```
gcc main.c -o run && ./run
```

When the `main.c` file is compiled and run, the following output will be produced:

```text
Int = 10
Float = 67.676765
Float = 67.677
Double = 3.141593
Double = %.15lf = 3.141592653589793
Char = A
Char = Merr
```