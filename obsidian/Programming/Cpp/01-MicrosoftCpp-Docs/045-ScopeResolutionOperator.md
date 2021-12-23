+The scope resolution operator **`::`** is used to identify and disambiguate identifiers used in different scopes. For more information about scope, see [Scope](https://docs.microsoft.com/en-us/cpp/cpp/scope-visual-cpp?view=msvc-160).

## [](https://docs.microsoft.com/en-us/cpp/cpp/scope-resolution-operator?view=msvc-160#syntax)Syntax

> _`qualified-id`_:  
>  _`nested-name-specifier`_ **`template`**opt _`unqualified-id`_

> _`nested-name-specifier`_:  
>  **`::`**  
>  _`type-name`_ **`::`**  
>  _`namespace-name`_ **`::`**  
>  _`decltype-specifier`_ **`::`**  
>  _`nested-name-specifier`_ _`identifier`_ **`::`**  
>  _`nested-name-specifier`_ **`template`**opt _`simple-template-id`_ **`::`**

> _`unqualified-id`_:  
>  _`identifier`_  
>  _`operator-function-id`_  
>  _`conversion-function-id`_  
>  _`literal-operator-id`_  
>  **`~`** _`type-name`_  
>  **`~`** _`decltype-specifier`_  
>  _`template-id`_

## [](https://docs.microsoft.com/en-us/cpp/cpp/scope-resolution-operator?view=msvc-160#remarks)Remarks

The `identifier` can be a variable, a function, or an enumeration value.

## Use `::` for classes and namespaces

The following example shows how the scope resolution operator is used with namespaces and classes:


```c++
namespace NamespaceA{
    int x;
    class ClassA {
    public:
        int x;
    };
}

int main() {

    // A namespace name used to disambiguate
    NamespaceA::x = 1;

    // A class name used to disambiguate
    NamespaceA::ClassA a1;
    a1.x = 2;
}
```

A scope resolution operator without a scope qualifier refers to the global namespace.


```c++
namespace NamespaceA{
    int x;
}

int x;

int main() {
    int x;

    // the x in main()
    x = 0;
    // The x in the global namespace
    ::x = 1;

    // The x in the A namespace
    NamespaceA::x = 2;
}
```

You can use the scope resolution operator to identify a member of a **`namespace`**, or to identify a namespace that nominates the member’s namespace in a **`using`** directive. In the example below, you can use `NamespaceC` to qualify `ClassB`, even though `ClassB` was declared in namespace `NamespaceB`, because `NamespaceB` was nominated in `NamespaceC` by a **`using`** directive.


```c++
namespace NamespaceB {
    class ClassB {
    public:
        int x;
    };
}

namespace NamespaceC{
    using namespace NamespaceB;
}

int main() {
    NamespaceB::ClassB b_b;
    NamespaceC::ClassB c_b;

    b_b.x = 3;
    c_b.x = 4;
}
```

You can use chains of scope resolution operators. In the following example, `NamespaceD::NamespaceD1` identifies the nested namespace `NamespaceD1`, and `NamespaceE::ClassE::ClassE1` identifies the nested class `ClassE1`.


```c++
namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{
    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
        };
    };
}

int main() {
    NamespaceD:: NamespaceD1::x = 6;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 7  ;
}
```

## [](https://docs.microsoft.com/en-us/cpp/cpp/scope-resolution-operator?view=msvc-160#use--for-static-members)Use `::` for static members

You must use the scope resolution operator to call static members of classes.


```c++
class ClassG {
public:
    static int get_x() { return x;}
    static int x;
};

int ClassG::x = 6;

int main() {

    int gx1 = ClassG::x;
    int gx2 = ClassG::get_x();
}
```

## [](https://docs.microsoft.com/en-us/cpp/cpp/scope-resolution-operator?view=msvc-160#use--for-scoped-enumerations)Use `::` for scoped enumerations

The scoped resolution operator is also used with the values of a scoped enumeration [Enumeration declarations](https://docs.microsoft.com/en-us/cpp/cpp/enumerations-cpp?view=msvc-160), as in the following example:


```c++
enum class EnumA{
    First,
    Second,
    Third
};

int main() {
    EnumA enum_value = EnumA::First;
}
```