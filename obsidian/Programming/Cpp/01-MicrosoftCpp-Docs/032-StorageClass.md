#programming #notes_from_articles #Cpp #Microsoft 


A _storage class_ in the context of C++ variable declarations is a type specifier that governs the lifetime, linkage, and memory location of objects. A given object can have only one storage class. Variables defined within a block have automatic storage unless otherwise specified using the **`extern`**, **`static`**, or **`thread_local`** specifiers. Automatic objects and variables have no linkage; they are not visible to code outside the block. Memory is allocated for them automatically when execution enters the block and de-allocated when the block is exited.

## `static`

The **`static`** keyword can be used to declare variables and functions at global scope, namespace scope, and class scope. Static variables can also be declared at local scope.

Static duration means that the object or variable is allocated when the program starts and is deallocated when the program ends. External linkage means that the name of the variable is visible from outside the file in which the variable is declared. Conversely, internal linkage means that the name is not visible outside the file in which the variable is declared. By default, an object or variable that is defined in the global namespace has static duration and external linkage. The **`static`** keyword can be used in the following situations.

1.  When you declare a variable or function at file scope (global and/or namespace scope), the **`static`** keyword specifies that the variable or function has internal linkage. When you declare a variable, the variable has static duration and the compiler initializes it to 0 unless you specify another value.
    
2.  When you declare a variable in a function, the **`static`** keyword specifies that the variable retains its state between calls to that function.
    
3.  When you declare a data member in a class declaration, the **`static`** keyword specifies that one copy of the member is shared by all instances of the class. A static data member must be defined at file scope. An integral data member that you declare as **`const static`** can have an initializer.
    
4.  When you declare a member function in a class declaration, the **`static`** keyword specifies that the function is shared by all instances of the class. A static member function cannot access an instance member because the function does not have an implicit **`this`** pointer. To access an instance member, declare the function with a parameter that is an instance pointer or reference.
    
5.  You cannot declare the members of a union as static. However, a globally declared anonymous union must be explicitly declared **`static`**.


```c++

// static1.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
void showstat( int curr ) {
   static int nStatic;    // Value of nStatic is retained
                          // between each function call
   nStatic += curr;
   cout << "nStatic is " << nStatic << endl;
}

int main() {
   for ( int i = 0; i < 5; i++ )
      showstat( i );
}
```

this example shows the uses of static in a class:
```c++
// static2.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class CMyClass {
public:
   static int m_i;
};

int CMyClass::m_i = 0;
CMyClass myObject1;
CMyClass myObject2;

int main() {
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject1.m_i = 1;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject2.m_i = 2;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   CMyClass::m_i = 3;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;
}
```

## extern
Objects and variables declared as **`extern`** declare an object that is defined in another translation unit or in an enclosing scope as having external linkage. For more information, see [`extern`](https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-160) and [Translation units and linkage](https://docs.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp?view=msvc-160).

## `thread_local` (C++11)

A variable declared with the **`thread_local`** specifier is accessible only on the thread on which it is created. The variable is created when the thread is created, and destroyed when the thread is destroyed. Each thread has its own copy of the variable. On Windows, **`thread_local`** is functionally equivalent to the Microsoft-specific [`__declspec( thread )`](https://docs.microsoft.com/en-us/cpp/cpp/thread?view=msvc-160) attribute.

[more](https://docs.microsoft.com/en-us/cpp/cpp/storage-classes-cpp?view=msvc-160)