# # Numeric, boolean, and pointer literals
[[Cpp-Data-Types]]
#programming #notes_from_articles #Cpp #Microsoft

Literals:
	a literal is a program that directly represent a value

You can use literals in many contexts, but most commonly to initialize named variables and to pass arguments to functions:


```c++
const int answer = 42;      // integer literal
double d = sin(108.87);     // floating point literal passed to sin function
bool b = true;              // boolean literal
MyClass* mc = nullptr;      // pointer literal
```

## Integer Literals

Integer literal starts with digit and have no fractional parts or exponents... It can be specified in binary,decimal, octal or hexadecimal form. It can be suffixed with long long etc...

```c++
int i = 157;        // Decimal literal
int j = 0198;       // Not a decimal number; erroneous octal literal
int k = 0365;       // Leading zero specifies octal literal, not decimal
int m = 36'000'000  // digit separators make large values more readable

int i = 0377;   // Octal literal
int j = 0397;   // Error: 9 is not an octal digit

int i = 0x3fff;   // Hexadecimal literal
int j = 0X3FFF;   // Equal to i

unsigned val_1 = 328u;                  // Unsigned value
long val_2 = 0x7FFFFFL;                 // Long value specified
                                        //  as hex literal
unsigned long val_3 = 0776745ul;        // Unsigned long value
auto val_4 = 108LL;                           // signed long long
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long

long long i = 24'847'458'121

```

## Floating Point Literals

Floating-point literals specify values that must have a fractional part. These values contain decimal points (**`.`**) and can contain exponents.

```c++
18.46
38.

18.46e0      // 18.46
18.46e1      // 184.6



```