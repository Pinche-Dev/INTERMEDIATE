# Postfix Expressions


        

Postfix expressions consist of primary expressions or expressions in which postfix operators follow a primary expression. The postfix operators are listed in the following table.

### [](https://docs.microsoft.com/en-us/cpp/cpp/postfix-expressions?view=msvc-160#postfix-operators)Postfix Operators

POSTFIX OPERATORS

Operator Name

Operator Notation

[Subscript operator](https://docs.microsoft.com/en-us/cpp/cpp/subscript-operator?view=msvc-160)

**[ ]**

[Function call operator](https://docs.microsoft.com/en-us/cpp/cpp/function-call-operator-parens?view=msvc-160)

**( )**

[Explicit type conversion operator](https://docs.microsoft.com/en-us/cpp/cpp/explicit-type-conversion-operator-parens?view=msvc-160)

_type-name_ **( )**

[Member access operator](https://docs.microsoft.com/en-us/cpp/cpp/member-access-operators-dot-and?view=msvc-160)

**.** or **->**

[Postfix increment operator](https://docs.microsoft.com/en-us/cpp/cpp/postfix-increment-and-decrement-operators-increment-and-decrement?view=msvc-160)

**++**

[Postfix decrement operator](https://docs.microsoft.com/en-us/cpp/cpp/postfix-increment-and-decrement-operators-increment-and-decrement?view=msvc-160)

**--**

The following syntax describes possible postfix expressions:

Copy

```
primary-expression
postfix-expression[expression]postfix-expression(expression-list)simple-type-name(expression-list)postfix-expression.namepostfix-expression->namepostfix-expression++postfix-expression--cast-keyword < typename > (expression )typeid ( typename )
```

The _postfix-expression_ above may be a [primary expression](https://docs.microsoft.com/en-us/cpp/cpp/primary-expressions?view=msvc-160) or another postfix expression. Postfix expressions group left to right, thus allowing the expressions to be chained together as follows: