# Basic Types

## Integers

* Integer type variables have whole values (as oppossed to float which also have a fractional part as well).

* Integer types are also divided into two categories: signed and unsighed:
    * Leftmost bit of signed integer (sign bit): 0 if integer is positive or zero, 1 if integer is negative.
    * Examples:
        * largest signed 16-bit integer: $(0111111111111111)_2 = 2^{15} -1 = 32767$. There are 15 1s and 1 zero (sign bit) here.
        * largest signed 32-bit integer: $(01111111111111111111111111111111)_2 = 2^{31} -1 = 2147483647$. There are 31 1s and 1 zero (sign bit) here.
        * largest unisghed 16-bit integer: $(1111111111111111)_2 = 2^{16} - 1 = 65535$.
        * largest unisghed 32-bit integer: $(11111111111111111111111111111111)_2 = 2^{32} -1 = 4294967295$
    

            > Quick note on how we get that $(1111111111111111)_2 = 2^{16} - 1$:
            >    * We have the following:
            >
            >    $$
            >    \displaystyle
            >    (0111111111111111)_2 = 2^{0} + 2^{1} + 2^{2} + ... + 2^{14} +  2^{15}
            >    $$
            >
            >    * This is a geometric series where the first term is $a = 2^{0} = 1$ and the common ratio is $r = 2$, with the >number of terms being $n = 16$ (from $ 2^{0}$ up to $ 2^{15}$).
            >
            >    * The sum $S$ of the first $n$ terms of a geometric series can be calculated by the formula:
            >
            >    $$ S = a \frac{r^{n} -1 }{r - 1} $$
            >
            >    * By substituting the above, we get:
            >
            >    $$ S = 1 \cdot \frac{2^{16} - 1}{2 - 1} = 2^{16} $$

* C's integer types are also further categorized into `short` and `long`. To construct an integer type that exactly meets out needs, we can combine the `short`, `long`, `signed` and `unsigned` keywords. Howerver only the following six combinations actually produce different types:

```c
short int
unsigned short int

int
unsigned int

long int
unsigned long int

long long int
unsigned long long int
```

* Note: We can drop the `int` keyword if we want, e.g. instead of `unsighed short int` we can simply write `unisigned short`, etc.

* The range of values represented by each of the six integer types varies from one machine to another. However there are a couple of rules that all compilers must obey.
    1) `short in`, `int` and `long int` each cover a certain minimum range of values (see table below).

        | Name       | Value                 | Formula  | Description                          |
        |------------|-----------------------|----------|--------------------------------------|
        | SHRT MIN   | $\leq -32767$               | $-(2^{15}-1)$ | Minimum short int value              |
        | SHRT MAX   | $\geq +32767$                | $2^{15}-1   $ | Maximum short int value              |
        | USHRT_MAX  | $\geq 65535$                | $2^{16}-1   $ | Maximum unsigned short int value     |
        | INT MIN    | $\leq -32767$               | $-(2^{15}-1)$ | Minimum int value                    |
        | INT MAX    | $\geq +32767$               | $2^{15}-1   $ | Maximum int value                    |
        | UINT_MAX   | $\geq 65535$                | $2^{16}-1   $ | Maximum unsigned int value           |
        | LONG MIN   | $\leq -2147483647$          | $-(2^{31}-1)$ | Minimum long int value               |
        | LONG MAX   | $\geq +2147483647$          | $2^{31}-1   $ | Maximum long int value               |
        | ULONG MAX  | $\geq +4294967295$           | $2^{32}-1   $ | Maximum unsigned long int value      |
        | LLONG MIN  | $\leq -9223372036854775807$ | $-(2^{63}-1)$ | Minimum long long int value          |
        | LLONG MAX  | $\geq 2+9223372036854775807$ | $2^{63}-1   $ | Maximum long long int value          |
        | ULLONG MAX | $\geq 18446744073709551615$ | $2^{64}-1   $ | Maximum unsigned long long int value |

    2) `int` may not be shorter than `short int` and `long int` may not be shorter than `int`.
        * However, it's possible that `short int` represents the same range of values as `int`; also, `int` may have the same range as `long int`.

* Below are some examples of the minimum and maximum values that different integer types have on different machines:

    * 16-bit:

        | Type               | Smallest Value | Largest Value |
        |--------------------|----------------|---------------|
        | short int          | -32,768        | 32,767        |
        | unsigned short int | 0              | 65,535        |
        | int                | -32,768        | 32,767        |
        | unsigned int       | 0              | 65,535        |
        | long int           | -2,147,483,648 | 2,147,483,647 |
        | unsigned long int  | 0              | 4,294,967,295 |

    * 32-bit:

        | Type               | Smallest Value | Largest Value |
        |--------------------|----------------|---------------|
        | short int          | -32,768        | 32,767        |
        | unsigned short int | 0              | 65,535        |
        | int                | -2,147,483,648 | 2,147,483,647 |
        | unsigned int       | 0              | 4,294,967,295 |
        | long int           | -2,147,483,648 | 2,147,483,647 |
        | unsigned long int  | 0              | 4,294,967,295 |

    * 64-bit:

        | Type               | Smallest Value             | Largest Value              |
        |--------------------|----------------------------|----------------------------|
        | short int          | -32,768                    | 32,767                     |
        | unsigned short int | 0                          | 65,535                     |
        | int                | -2,147,483,648             | 2,147,483,647              |
        | unsigned int       | 0                          | 4,294,967,295              |
        | long int           | -9,223,372,036,854,775,808 | 9,223,372,036,854,775.807  |
        | unsigned long int  | 0                          | 18,446,744,073,709,551,615 |

* Integer constants:
    * Decimal: Contain digits between 0 and 9 but **must not** begin with a 0, e.g. 15, 255, 32767
        * Type: Smallest of `int`, `long int`, `long long int`
    * Octal: Contain digits between 0 and 7 and **must** begin with a 0: 017, 0377, 07777
        * Type: Smallest of: `int`, `unsigned int`, `long int`, `unsigned long int`, `long long int`, `unsigned long long int`.
    * Hexadecimal: Contain digits between 0 and 9 and letter between `a` and `f` (case insensitive), and always begin with "0x", e.g.:
        ```C
        0xff, 0xfF, 0x7a, 0XFF
        ```
        * Type: compiler goes through the following to find the one that fits: `int`, `unsigned int`, `long int`, `unsigned long int`.
    * The above are simply ways to represent numbers and does not affect how integers are stored in memory; they are all stored in binary.
    * To force the compiler to treat a constant as a `long int`, use `L` (or `l`) in the end: `15L`, `0377L`, `0x7fffL`
        * Similarly use `LL` for `long long int`.
    * To indicate that a constant is unisigned do the same with `U` (or `u`): `15U`, `0377U`, `0x7fffL`.
    * The above can be used in combination as well: `0xffffffffUL`.

* Integer overflow: If the result of some calculation does not fit in the variable's integer type, then *integer overflow* has occurred.
    * Example: we sum two `unisgned int` variables and the result is larger than 32767.
    * Behaviour when overflow happens:
        * If **unsigned**: The value we get will be the result modulo $2^{n}$ where $n$ is the number of bits used to store the result.
        * If **signed**: Undefined behaviour, we most likely get some random value.


* Reading and writing integers: the `d` conversion specification applies to `int` types only. The following should be used for other types instead:
    * `u`: `unsigned int` in base 10
    * `o`: in base 8
    * `x`: in base 16
    * `hd`, `hu`, `ho`, `hx`: for `short int` types
    * `ld`, `lu`, `lo`, `lx`: for `long int` types
    * `lld`, `llu`, `llo`, `llx`: for `long long int` types

## Floats

* C provides three floating types, corresponding to different floating-point formats:
    * `float`: Single-precision floating-point
    * `double`: Double-precision floating-point
    * `long double`: Extended-precision floating point (rare)

* Most computers store floating-point numbers using the IEEE Standard 754:
    * Numbers are stored in a form of scientific notation, with each number having three parts: sign, exponent and fraction.
    * Number of bits reserved for exponent determines how large (or small) numbers can be, while the number of bits in the fraction determines the precision
    * Single precision: 32-bits
        * sign: 1 bit
        * exponent: 8 bits
        * fraction: 23 bits
    * Double precision: 64-bits.

* Floating constants: can be written in a number of ways, e.g. here are equivalent ways of writing the number 57.0:
    ```C
    57.0, 57., 57.0e0, 57E0, 5.7e1, 5.7e+1, .57e2 570.e-1
    ```

    * Force single precision for constant: append `F` (or `f`) at the end.
    * Force double precision for costant: append `L` (or `l`) at the end.
    
 * Format strings:
    * `e`: scientific notation
    * `f`: decimal floating point
    * `g`: strips any trailing zeroes
    * **Reading a double:** Add `l` in front of any of the above, e.g. `scanf("%lf", &d)` (here d is `double`)
    * **Reading or writing a long double:** Add `L` in front of any of the first three above.


## Character Types

* A variable of type `char` can be assigned any single character, e.g.:
    ```C
    char ch

    ch = 'a'
    ch = 'A'
    ch = '0'
    ch = ' '
    ```
* **C treats characters as small integers**
    * This kind of makes sense since eventually characters are encoded in binary, so getting the decial representation from there isn't that huge a leap.
        * In ASCII for example, character codes a 7-bit long, representing a total of 128 characters. In other words, character codes range from `0000000` to `1111111` which we can think of as the integers from 0 to 127.
            * e.g. 'a' has the value 97, 'A' has the value 65 and ' ' the value 32.
        * Character constants have type `int`!!
            ```C
            char ch;
            int i;

            i = 'a'; // i is now 97
            ch = 65; // ch is now 'A'
            ch = ch + 1 // ch is now 'B'
            ch++ // ch is now 'C'
            ```

            * Characters can be compared just like ints.

* Signed and Unsigned characters
    * signed characters normally have values: -128 to 127
    * unsigned characters: 0 to 255
    * Most of the times we don't really care.


* Arithmetic types:
    * Integer types
        * `char`
        * Signed integer types, both standard (`signed char`, `short int`, `int`, `long int`, `long long int`) and extended.
        * Unsigned integer types, both standard (`unsigned char`, `unsigned short int`, `unsigned int`, `unsigned long int`, `unsigned long long int`, `_Bool`) and extended.
        * Enumerated types
    * Floating types
        * Real floating types (`float`, `double`, `long double`)
        * Complex types (`float_Complex`, `double_Complex`, `long double_Complex`)

* Read and Write characters
    * With `scanf` and `printf`: Use the `%c` conversion specification.
    * With `getchar` and `putchar` (faster):
        * `putchar(ch)`: Writes the `char` `ch`
        * `ch = getchar()`: Reads a character and then stores it in `ch`. 

## Type Conversion

* While computers are quite restrictive when it comes to arithmetic, C allows basic types to be mixed in expressions.
    * i.e. while a computer would not allow the addition of a 16-bit int and a 32-bit int or float, C does allow it.
    * In the above example, the compiler will arrange for the 16-bit to be converted to 32 bits. If we add an int and a float, the compiler will arrange for the int to be converted to float.

* **Implicit conversions:** type conversions handled by the compiler.

* **Explicit conversion:** conversions performed by the programmer using the cast operator.