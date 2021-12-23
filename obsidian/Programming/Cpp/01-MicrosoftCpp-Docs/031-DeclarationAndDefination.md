#programming #notes_from_articles #Cpp #Microsoft 

# Declarations and definitions (C++)

A C++ program consists of various entities such as variables, functions, types, and namespaces. Each of these entities must be _declared_ before they can be used. A declaration specifies a unique name for the entity, along with information about its type and other characteristics. In C++ the point at which a name is declared is the point at which it becomes visible to the compiler. You can't refer to a function or class that is declared at some later point in the compilation unit. Variables should be declared as close as possible before the point at which they're used.

```C++
#include <string>

int f(int i); // forward declaration

int main()
{
    const double pi = 3.14; //OK
    int i = f(2); //OK. f is forward-declared
    std::string str; // OK std::string is declared in <string> header
    C obj; // error! C not yet declared.
    j = 0; // error! No type specified.
    auto k = 0; // OK. type inferred as int by compiler.
}

int f(int i)
{
    return i + 42;
}

namespace N {
   class C{/*...*/};
}
```
**In c++ funcitons and variables cannot be used before they are declared in source file unlike languanges such as C#**


## Declaratoin

- The name that is introduced by a declaration is valid within the _scope_ where the declaration occurs.
In the previous example, the variables that are declared inside the `main` function are _local variables_. You could declare another variable named `i` outside of main, at _global scope_, and it would be a separate entity. However, such duplication of names can lead to programmer confusion and errors, and should be avoided. In line 21, the class `C` is declared in the scope of the namespace `N`. **The use of namespaces helps to avoid _name collisions_.** Most C++ Standard Library names are declared within the `std` namespace. For more information about how scope rules interact with declarations, see [Scope](https://docs.microsoft.com/en-us/cpp/cpp/scope-visual-cpp?view=msvc-160).

##  Definitions

Some entities, including functions, classes, enums, and constant variables, must be defined as well as declared. A _definition_ provides the compiler with all the information it needs to generate machine code when the entity is used later in the program. In the previous example, line 3 contains a declaration for the function `f` but the _definition_ for the function is provided in lines 15 through 18. On line 21, the class `C` is both declared and defined (although as defined the class doesn't do anything). A constant variable must be defined, in other words assigned a value, in the same statement in which it's declared. A declaration of a built-in type such as **`int`** is automatically a definition because the compiler knows how much space to allocate for it.

```c++
// Declare and define int variables i and j.
int i;
int j = 10;

// Declare enumeration suits.
enum suits { Spades = 1, Clubs, Hearts, Diamonds };

// Declare class CheckBox.
class CheckBox : public Control
{
public:
    Boolean IsChecked();
    virtual int     ChangeState() = 0;
};
```


## Typedefs and using statements

In older versions of C++, the [`typedef`](https://docs.microsoft.com/en-us/cpp/cpp/aliases-and-typedefs-cpp?view=msvc-160) keyword is used to declare a new name that is an _alias_ for another name. For example, the type `std::string` is another name for `std::basic_string<char>`. It should be obvious why programmers use the typedef name and not the actual name. In modern C++, the [`using`](https://docs.microsoft.com/en-us/cpp/cpp/aliases-and-typedefs-cpp?view=msvc-160) keyword is preferred over **`typedef`**, but the idea is the same: a new name is declared for an entity, which is already declared and defined.

## [](https://docs.microsoft.com/en-us/cpp/cpp/declarations-and-definitions-cpp?view=msvc-160#static-class-members)Static class members

Because static class data members are discrete variables that are shared by all objects of the class, they must be defined and initialized outside the class definition. (For more information, see [Classes](https://docs.microsoft.com/en-us/cpp/cpp/classes-and-structs-cpp?view=msvc-160).)

## [](https://docs.microsoft.com/en-us/cpp/cpp/declarations-and-definitions-cpp?view=msvc-160#extern-declarations)extern declarations

A C++ program might contain more than one [compilation unit](https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160). To declare an entity that is defined in a separate compilation unit, use the [`extern`](https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-160) keyword. The information in the declaration is sufficient for the compiler, but if the definition of the entity can't be found in the linking step, then the linker will raise an error.

## [](https://docs.microsoft.com/en-us/cpp/cpp/declarations-and-definitions-cpp?view=msvc-160#in-this-section)In this section

[[032-StorageClass]][Storage classes](https://docs.microsoft.com/en-us/cpp/cpp/storage-classes-cpp?view=msvc-160)  
[[033-Auto]] [`auto`](https://docs.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-160)
[[034-Const]] [`const`](https://docs.microsoft.com/en-us/cpp/cpp/const-cpp?view=msvc-160)  
[[035-constexpr]] [`constexpr`](https://docs.microsoft.com/en-us/cpp/cpp/constexpr-cpp?view=msvc-160)  
[[036-extern]][`extern`](https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-160)  
[[037-Initilializers]][Initializers](https://docs.microsoft.com/en-us/cpp/cpp/initializers?view=msvc-160)  
[[Programming/Cpp/01-MicrosoftCpp-Docs/038-]][Aliases and typedefs](https://docs.microsoft.com/en-us/cpp/cpp/aliases-and-typedefs-cpp?view=msvc-160)  
[[Programming/Cpp/01-MicrosoftCpp-Docs/039-]][`using` declaration](https://docs.microsoft.com/en-us/cpp/cpp/using-declaration?view=msvc-160)  
[[Programming/Cpp/01-MicrosoftCpp-Docs/040-]][`volatile`](https://docs.microsoft.com/en-us/cpp/cpp/volatile-cpp?view=msvc-160)  
[[Programming/Cpp/01-MicrosoftCpp-Docs/041-]][`decltype`](https://docs.microsoft.com/en-us/cpp/cpp/decltype-cpp?view=msvc-160)  
[[Programming/Cpp/01-MicrosoftCpp-Docs/042-]][Attributes in C++](https://docs.microsoft.com/en-us/cpp/cpp/attributes?view=msvc-160)