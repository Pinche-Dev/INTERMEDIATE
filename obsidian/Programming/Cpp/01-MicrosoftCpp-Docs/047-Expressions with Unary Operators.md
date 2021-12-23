# Expressions with Unary Operators



Unary operators act on only one operand in an expression. The unary operators are as follows:

-   [Indirection operator (*)](https://docs.microsoft.com/en-us/cpp/cpp/indirection-operator-star?view=msvc-160)
    
-   [Address-of operator (&)](https://docs.microsoft.com/en-us/cpp/cpp/address-of-operator-amp?view=msvc-160)
    
-   [Unary plus operator (+)](https://docs.microsoft.com/en-us/cpp/cpp/unary-plus-and-negation-operators-plus-and?view=msvc-160)
    
-   [Unary negation operator (-)](https://docs.microsoft.com/en-us/cpp/cpp/unary-plus-and-negation-operators-plus-and?view=msvc-160)
    
-   [Logical negation operator (!)](https://docs.microsoft.com/en-us/cpp/cpp/logical-negation-operator-exclpt?view=msvc-160)
    
-   [One's complement operator (~)](https://docs.microsoft.com/en-us/cpp/cpp/one-s-complement-operator-tilde?view=msvc-160)
    
-   [Prefix increment operator (++)](https://docs.microsoft.com/en-us/cpp/cpp/prefix-increment-and-decrement-operators-increment-and-decrement?view=msvc-160)
    
-   [Prefix decrement operator (--)](https://docs.microsoft.com/en-us/cpp/cpp/prefix-increment-and-decrement-operators-increment-and-decrement?view=msvc-160)
    
-   [Cast operator ()](https://docs.microsoft.com/en-us/cpp/cpp/cast-operator-parens?view=msvc-160)
    
-   [`sizeof` operator](https://docs.microsoft.com/en-us/cpp/cpp/sizeof-operator?view=msvc-160)
    
-   [`__uuidof` operator](https://docs.microsoft.com/en-us/cpp/cpp/uuidof-operator?view=msvc-160)
    
-   [`alignof` operator](https://docs.microsoft.com/en-us/cpp/cpp/alignof-operator?view=msvc-160)
    
-   [`new` operator](https://docs.microsoft.com/en-us/cpp/cpp/new-operator-cpp?view=msvc-160)
    
-   [`delete` operator](https://docs.microsoft.com/en-us/cpp/cpp/delete-operator-cpp?view=msvc-160)
    

These operators have right-to-left associativity. Unary expressions generally involve syntax that precedes a postfix or primary expression.

The following are the possible forms of unary expressions.

-   _postfix-expression_
    
-   `++` _unary-expression_
    
-   `--` _unary-expression_
    
-   _unary-operator_ _cast-expression_
    
-   **`sizeof`** _unary-expression_
    
-   `sizeof(` _type-name_ `)`
    
-   `decltype(` _expression_ `)`
    
-   _allocation-expression_
    
-   _deallocation-expression_
    

Any _postfix-expression_ is considered a _unary-expression_, and because any primary expression is considered a _postfix-expression_, any primary expressions is considered a _unary-expression_ also. For more information, see [Postfix Expressions](https://docs.microsoft.com/en-us/cpp/cpp/postfix-expressions?view=msvc-160) and [Primary Expressions](https://docs.microsoft.com/en-us/cpp/cpp/primary-expressions?view=msvc-160).

A _unary-operator_ consists of one or more of the following symbols: `* & + - ! ~`

The _cast-expression_ is a unary expression with an optional cast to change the type. For more information see [Cast Operator: ()](https://docs.microsoft.com/en-us/cpp/cpp/cast-operator-parens?view=msvc-160).

An _expression_ can be any expression. For more information, see [Expressions](https://docs.microsoft.com/en-us/cpp/cpp/expressions-cpp?view=msvc-160).

The _allocation-expression_ refers to the **`new`** operator. The _deallocation-expression_ refers to the **`delete`** operator. For more information, see the links earlier in this topic.