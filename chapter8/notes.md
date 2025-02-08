# Arrays

## 1D

* Definition:

```c
#define N 15

int a[N];
```
### Idioms:

* Clears a:
```c
for (i = 0; i < N; i++)
    a[i] = 0;
```

* Reads data into a:
```c
for (i = 0; i < N; i++)
    scanf("$d", &a[i]);
```

* Sums the elements of a:
```c
for (i = 0; i < N; i++)
    sum += a[i];
```

### Initializers:

* Initialize array with zeros:
```c
int a[N] = {0}
```

* Designated initializers: Say we want element 2 of the array to be 29, element 9 to be 7 and element 14 to be 48:
```
# One way:
a[N] = {0, 0, 29, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 48, 0}
# Better way:
a[N] = {[2] = 29, [9] = 7, [14] = 48} #2, 9 and 14 are called designators; order of designators doesn't matter
```

### sizeof operator with arrays

* `sizeof` operator returns the size of the input variable in bytes. It can be used with an array to determine the array's size in bytes.
    * e.g. if `a[10]` is an array of integers, then `sizeof(a)` is typically 40 (assuming each integer is 4 bytes).

* Number of elements in an array: `sizeof(a) / sizeof(a[0])`
    * Can also define it as:
    ```c
    #define SIZE ((int) (sizeof(a) / sizeof(a[0])))

    for (int i = 0; i < SIZE; i++)
        a[i] = 0;
    ```


## n-D

* Two dimensional arrays:

```c
int m[<rows>][<columns>]
```

**Important:** C stores arrays in memory in **row-major order**, with row 0 first, then row 1 and so forth.
