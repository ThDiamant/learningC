# Chapter 7 Exercise 1 Notes

We need to figure out the min `n` that will crush the program. To do that, we need to provide some `n` so that $n^2 > max(int)$.

## int

On my machine, `sizeof(int)` return 4 which means 4 bytes are used to store an int. This means there are $4*8 = 32$ bits allocated for an `int`. Also we remember that `int` is by default signed. This means, that taking away the sign bit we should have a max value of $2^{31} - 1 = 2147483647$.

Therefore, we theoretically need to enter $n = \sqrt(2147483647) \approx 46340.9 \approx 46341 $ to crash the program.

Running the program with `n = 46340` and `n = 46341` verifies the above: the program runs correctly for the former, and it crushes for the latter (namely it returns the value `-2147479015` for the square of `46341`).

## short

Using a `short int` instead, we get that the computer uses 2 bytes for it, i.e. 16 bits. Therefore, the max value for a `short` is $2^{15 - 1} = 32767$ and the max value for which the program works is $\sqrt(32767) \approx 181.019 = 181 $. Hence, the min `n` which will crush the program is 182.

Running the programm with `n=182` verifies the above since we get the square of 181 correctly (32761), but not 182 (we get -32412).

## long

Using a `long int`, we get that the computer uses 8 bytes for it, i.e. 64 bits. Therefore, the max value for a `short` is $2^{63 - 1} = 9,223,372,036,854,775,807$ and the max value for which the program works is $\sqrt(9,223,372,036,854,775,807) \approx 3,037,000,499.97 = \approx 3,037,000,499$. Hence, the min `n` which will crush the program is 3,037,000,500.

I did not run the program for this input though as it will take too long to run.
