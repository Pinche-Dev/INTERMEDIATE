# Header files (c++)

#programming #notes_from_articles #Cpp #Microsoft 

The names of program elements such as variables, functions, classes, and so on must be declared before they can be used. For example, you can't just write `x = 42` without first declaring 'x'.

```c++
int x; // declaration
x = 42; // use x
```


## Example

The following example shows a common way to declare a class and then use it in a different source file. We'll start with the header file, `my_class.h`. It contains a class definition, but note that the definition is incomplete; the member function `do_something` is not defined:

C++Copy

```c++
// my_class.h
namespace N
{
    class my_class
    {
    public:
        void do_something();
    };

}
```

Next, create an implementation file (typically with a .cpp or similar extension). We'll call the file my_class.cpp and provide a definition for the member declaration. We add an `#include` directive for "my_class.h" file in order to have the my_class declaration inserted at this point in the .cpp file, and we include `<iostream>` to pull in the declaration for `std::cout`. Note that quotes are used for header files in the same directory as the source file, and angle brackets are used for standard library headers. Also, many standard library headers do not have .h or any other file extension.

In the implementation file, we can optionally use a **`using`** statement to avoid having to qualify every mention of "my_class" or "cout" with "N::" or "std::". Don't put **`using`** statements in your header files!


```c++
// my_class.cpp
#include "my_class.h" // header in local directory
#include <iostream> // header in standard library

using namespace N;
using namespace std;

void my_class::do_something()
{
    cout << "Doing something!" << endl;
}
```

Now we can use `my_class` in another .cpp file. We #include the header file so that the compiler pulls in the declaration. All the compiler needs to know is that my_class is a class that has a public member function called `do_something()`.


```c++
// my_program.cpp
#include "my_class.h"

using namespace N;

int main()
{
    my_class mc;
    mc.do_something();
    return 0;
}
```

After the compiler finishes compiling each .cpp file into .obj files, it passes the .obj files to the linker. When the linker merges the object files it finds exactly one definition for my_class; it is in the .obj file produced for my_class.cpp, and the build succeeds.

## [](https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160#include-guards)Include guards

Typically, header files have an _include guard_ or a `#pragma once` directive to ensure that they are not inserted multiple times into a single .cpp file.


```c++
// my_class.h
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H

namespace N
{
    class my_class
    {
    public:
        void do_something();
    };
}

#endif /* MY_CLASS_H */
```

## [](https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160#what-to-put-in-a-header-file)



## What to put in a header file

Because a header file might potentially be included by multiple files, it cannot contain definitions that might produce multiple definitions of the same name. The following are not allowed, or are considered very bad practice:

-   built-in type definitions at namespace or global scope
-   non-inline function definitions
-   non-const variable definitions
-   aggregate definitions
-   unnamed namespaces
-   using directives

Use of the **`using`** directive will not necessarily cause an error, but can potentially cause a problem because it brings the namespace into scope in every .cpp file that directly or indirectly includes that header.

## Sample header file

The following example shows the various kinds of declarations and definitions that are allowed in a header file:


```c++
// sample.h
#pragma once
#include <vector> // #include directive
#include <string>

namespace N  // namespace declaration
{
    inline namespace P
    {
        //...
    }

    enum class colors : short { red, blue, purple, azure };

    const double PI = 3.14;  // const and constexpr definitions
    constexpr int MeaningOfLife{ 42 };
    constexpr int get_meaning()
    {
        static_assert(MeaningOfLife == 42, "unexpected!"); // static_assert
        return MeaningOfLife;
    }
    using vstr = std::vector<int>;  // type alias
    extern double d; // extern variable

#define LOG   // macro definition

#ifdef LOG   // conditional compilation directive
    void print_to_log();
#endif

    class my_class   // regular class definition,
    {                // but no non-inline function definitions

        friend class other_class;
    public:
        void do_something();   // definition in my_class.cpp
        inline void put_value(int i) { vals.push_back(i); } // inline OK

    private:
        vstr vals;
        int i;
    };

    struct RGB
    {
        short r{ 0 };  // member initialization
        short g{ 0 };
        short b{ 0 };
    };

    template <typename T>  // template definition
    class value_store
    {
    public:
        value_store<T>() = default;
        void write_value(T val)
        {
            //... function definition OK in template
        }
    private:
        std::vector<T> vals;
    };

    template <typename T>  // template declaration
    class value_widget;
}
```