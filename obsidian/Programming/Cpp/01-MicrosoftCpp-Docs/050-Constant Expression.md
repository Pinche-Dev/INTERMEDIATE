# C++ Constant Expressions
        
A _constant_ value is one that doesn't change. C++ provides two keywords to enable you to express the intent that an object is not intended to be modified, and to enforce that intent.

C++ requires constant expressions — expressions that evaluate to a constant — for declarations of:

-   Array bounds
    
-   Selectors in case statements
    
-   Bit-field length specification
    
-   Enumeration initializers
    

The only operands that are legal in constant expressions are:

-   Literals
    
-   Enumeration constants
    
-   Values declared as const that are initialized with constant expressions
    
-   **`sizeof`** expressions
    

Nonintegral constants must be converted (either explicitly or implicitly) to integral types to be legal in a constant expression. Therefore, the following code is legal:


```
const double Size = 11.0;
char chArray[(int)Size];
```

Explicit conversions to integral types are legal in constant expressions; all other types and derived types are illegal except when used as operands to the **`sizeof`** operator.

The comma operator and assignment operators cannot be used in constant expressions.