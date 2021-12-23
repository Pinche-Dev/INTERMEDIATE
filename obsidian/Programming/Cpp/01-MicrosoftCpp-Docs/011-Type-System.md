Terminology
<https://docs.microsoft.com/en-us/cpp/cpp/cpp-type-system-modern-cpp?view=msvc-160>

**Variable**: The symbolic name of a quantity of data so that the name can be used to access the data it refers to throughout the scope of the code where it is defined. In C++, _variable_ is generally used to refer to instances of scalar data types, whereas instances of other types are usually called _objects_.

**Object**: For simplicity and consistency, this article uses the term _object_ to refer to any instance of a class or structure, and when it is used in the general sense includes all types, even scalar variables.

**POD type** (plain old data): This informal category of data types in C++ refers to types that are scalar (see the Fundamental types section) or are _POD classes_. A POD class has no static data members that aren’t also PODs, and has no user-defined constructors, user-defined destructors, or user-defined assignment operators. Also, a POD class has no virtual functions, no base class, and no private or protected non-static data members. POD types are often used for external data interchange, for example with a module written in the C language (which has POD types only).

```c++
int result = 0;              // Declare and initialize an integer.
double coefficient = 10.8;   // Declare and initialize a floating
                             // point value.
auto name = "Lady G.";       // Declare a variable and let compiler
                             // deduce the type.
auto address;                // error. Compiler cannot deduce a type
                             // without an intializing value.
age = 12;                    // error. Variable declaration must
                             // specify a type or use auto!
result = "Kenny G.";         // error. Can’t assign text to an int.
string result = "zero";      // error. Can’t redefine a variable with
                             // new type.
int maxValue;                // Not recommended! maxValue contains
                             // garbage bits until it is initialized.
```

## fundamental Built in types

![[Pasted image 20210901131836.png]]

|Type	|Size	|Comment|
--------|-------|-------|
int	|4 bytes|	The default choice for integral values.
double	|8 bytes|	The default choice for floating point values.
bool	|1 byte	|Represents values that can be either true or false.
char	|1 byte	|Use for ASCII characters in older C-style strings or std::string objects that will never have to be converted to UNICODE.
wchar_t |	2 bytes	| Represents "wide" character values that may be encoded in UNICODE format (UTF-16 on Windows, other operating systems may differ). This is the character type that is used in strings of type std::wstring.
unsigned char	|1 byte	|C++ has no built-in byte type. Use unsigned char to represent a byte value.
unsigned int	|4 bytes	|Default choice for bit flags.
long long	|8 bytes	|Represents very large integer values.

## The void type

The void type is a special type; you cannot declare a variable of type void, but you can declare a variable of type void * (pointer to void), which is sometimes necessary when allocating raw (un-typed) memory. However, pointers to void are not type-safe and generally their use is strongly discouraged in modern C++. In a function declaration, a void return value means that the function does not return a value; this is a common and acceptable use of void. While the C language required functions that have zero parameters to declare void in the parameter list, for example, fou(void), this practice is discouraged in modern C++ and should be declared fou(). For more information, see Type Conversions and Type Safety.

## const type qualifier

Any built-in or user-defined type may be qualified by the const keyword. Additionally, member functions may be const-qualified and even const-overloaded. The value of a const type cannot be modified after it is initialized.

```c++
const double PI = 3.1415;
PI = .75 //Error. Cannot modify const variable.
```

The const qualifier is used extensively in function and variable declarations and "const correctness" is an important concept in C++; essentially it means to use const to guarantee, at compile time, that values are not modified unintentionally. For more information, see const.

