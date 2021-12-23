# Casting Operators

There are several casting operators specific to the C++ language. These operators are intended to remove some of the ambiguity and danger inherent in old style C language casts. These operators are:

-   [dynamic_cast](https://docs.microsoft.com/en-us/cpp/cpp/dynamic-cast-operator?view=msvc-160) Used for conversion of polymorphic types.
    
-   [static_cast](https://docs.microsoft.com/en-us/cpp/cpp/static-cast-operator?view=msvc-160) Used for conversion of nonpolymorphic types.
    
-   [const_cast](https://docs.microsoft.com/en-us/cpp/cpp/const-cast-operator?view=msvc-160) Used to remove the **`const`**, **`volatile`**, and **`__unaligned`** attributes.
    
-   [reinterpret_cast](https://docs.microsoft.com/en-us/cpp/cpp/reinterpret-cast-operator?view=msvc-160) Used for simple reinterpretation of bits.
    
-   [safe_cast](https://docs.microsoft.com/en-us/cpp/extensions/safe-cast-cpp-component-extensions?view=msvc-160) Used in C++/CLI to produce verifiable MSIL.
    

Use **`const_cast`** and **`reinterpret_cast`** as a last resort, since these operators present the same dangers as old style casts. However, they are still necessary in order to completely replace old style casts.