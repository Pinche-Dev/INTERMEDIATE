The keyword **`constexpr`** was introduced in C++11 and improved in C++14. It means _constant expression_. Like **`const`**, it can be applied to variables: A compiler error is raised when any code attempts to modify the value. Unlike **`const`**, **`constexpr`** can also be applied to functions and class constructors. **`constexpr`** indicates that the value, or return value, is constant and, where possible, is computed at compile time.

A **`constexpr`** integral value can be used wherever a const integer is required, such as in template arguments and array declarations. And when a value is computed at compile time instead of run time, it helps your program run faster and use less memory.


**Syntax**
```
**`constexpr`** _literal-type_ _identifier_ **=** _constant-expression_ **;**  
**`constexpr`** _literal-type_ _identifier_ **{** _constant-expression_ **}** **;**  
**`constexpr`** _literal-type_ _identifier_ **(** _params_ **)** **;**  
**`constexpr`** _ctor_ **(** _params_ **)** **;**
```

## constexpr variables

The primary difference between **`const`** and **`constexpr`** variables is that the initialization of a **`const`** variable can be deferred until run time. A **`constexpr`** variable must be initialized at compile time. All **`constexpr`** variables are **`const`**.

-   A variable can be declared with **`constexpr`**, when it has a literal type and is initialized. If the initialization is performed by a constructor, the constructor must be declared as **`constexpr`**.
    
-   A reference may be declared as **`constexpr`** when both these conditions are met: The referenced object is initialized by a constant expression, and any implicit conversions invoked during initialization are also constant expressions.
    
-   All declarations of a **`constexpr`** variable or function must have the **`constexpr`** specifier.

```c++
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## constexpr functions

A **`constexpr`** function is one whose return value is computable at compile time when consuming code requires it. Consuming code requires the return value at compile time to initialize a **`constexpr`** variable, or to provide a non-type template argument. When its arguments are **`constexpr`** values, a **`constexpr`** function produces a compile-time constant. When called with non-**`constexpr`** arguments, or when its value isn't required at compile time, it produces a value at run time like a regular function. (This dual behavior saves you from having to write **`constexpr`** and non-**`constexpr`** versions of the same function.)

A **`constexpr`** function or constructor is implicitly **`inline`**.

The following rules apply to constexpr functions:

-   A **`constexpr`** function must accept and return only [literal types](https://docs.microsoft.com/en-us/cpp/cpp/trivial-standard-layout-and-pod-types?view=msvc-160#literal_types).
    
-   A **`constexpr`** function can be recursive.
    
-   It can't be [virtual](https://docs.microsoft.com/en-us/cpp/cpp/virtual-cpp?view=msvc-160). A constructor can't be defined as **`constexpr`** when the enclosing class has any virtual base classes.
    
-   The body can be defined as `= default` or `= delete`.
    
-   The body can contain no **`goto`** statements or **`try`** blocks.
    
-   An explicit specialization of a non-**`constexpr`** template can be declared as **`constexpr`**:
    
-   An explicit specialization of a **`constexpr`** template doesn't also have to be **`constexpr`**:
    

The following rules apply to **`constexpr`** functions in Visual Studio 2017 and later:

-   It may contain **`if`** and **`switch`** statements, and all looping statements including **`for`**, range-based **`for`**, **`while`**, and **do-while**.
    
-   It may contain local variable declarations, but the variable must be initialized. It must be a literal type, and can't be **`static`** or thread-local. The locally declared variable isn't required to be **`const`**, and may mutate.
    
-   A **`constexpr`** non-**`static`** member function isn't required to be implicitly **`const`**.
    



```c++
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
}
```

## extern constexpr

The [/Zc:externConstexpr](https://docs.microsoft.com/en-us/cpp/build/reference/zc-externconstexpr?view=msvc-160) compiler option causes the compiler to apply [external linkage](https://docs.microsoft.com/en-us/cpp/c-language/external-linkage?view=msvc-160) to variables declared by using **extern constexpr**. In earlier versions of Visual Studio, either by default or when **/Zc:externConstexpr-** is specified, Visual Studio applies internal linkage to **`constexpr`** variables even when the **`extern`** keyword is used. The **/Zc:externConstexpr** option is available starting in Visual Studio 2017 Update 15.6, and is off by default. The [/permissive-](https://docs.microsoft.com/en-us/cpp/build/reference/permissive-standards-conformance?view=msvc-160) option doesn't enable **/Zc:externConstexpr**.

## [](https://docs.microsoft.com/en-us/cpp/cpp/constexpr-cpp?view=msvc-160#example)Example

The following example shows **`constexpr`** variables, functions, and a user-defined type. In the last statement in `main()`, the **`constexpr`** member function `GetValue()` is a run-time call because the value isn't required to be known at compile time.

```c++
// constexpr.cpp
// Compile with: cl /EHsc /W4 constexpr.cpp
#include <iostream>

using namespace std;

// Pass by value
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
}

// Pass by reference
constexpr float exp2(const float& x, const int& n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp2(x * x, n / 2) :
        exp2(x * x, (n - 1) / 2) * x;
}

// Compile-time computation of array length
template<typename T, int N>
constexpr int length(const T(&)[N])
{
    return N;
}

// Recursive constexpr function
constexpr int fac(int n)
{
    return n == 1 ? 1 : n * fac(n - 1);
}

// User-defined type
class Foo
{
public:
    constexpr explicit Foo(int i) : _i(i) {}
    constexpr int GetValue() const
    {
        return _i;
    }
private:
    int _i;
};

int main()
{
    // foo is const:
    constexpr Foo foo(5);
    // foo = Foo(6); //Error!

    // Compile time:
    constexpr float x = exp(5, 3);
    constexpr float y { exp(2, 5) };
    constexpr int val = foo.GetValue();
    constexpr int f5 = fac(5);
    const int nums[] { 1, 2, 3, 4 };
    const int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };

    // Run time:
    cout << "The value of foo is " << foo.GetValue() << endl;
}
```
