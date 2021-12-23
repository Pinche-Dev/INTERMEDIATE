
<https://docs.microsoft.com/en-us/cpp/cpp/const-cpp?view=msvc-160>

const specifies that the object or variable is not modifiable

```c++
const int x = 45;
x =23 //this will result to error because const (constant) varialbes are not modifiable

const * const_pointer  = &x; //A pointer to a variable declared as **`const`** can be assigned only to a pointer that is also declared as **`const`**.

```

## const member function

Declaring a member function with the **`const`** keyword specifies that the function is a "read-only" function that does not modify the object for which it is called. A constant member function cannot modify any non-static data members or call any member functions that aren't constant.To declare a constant member function, place the **`const`** keyword after the closing parenthesis of the argument list. The **`const`** keyword is required in both the declaration and the definition.

```c++

// constant_member_function.cpp
class Date
{
public:
   Date( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Date::getMonth() const
{
   return month;        // Doesn't modify anything
}
void Date::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );    // Okay
   BirthDate.getMonth();    // Okay
   BirthDate.setMonth( 4 ); // C2662 Error
}
```

## C and C++ const differences

When you declare a variable as **`const`** in a C source code file, you do so as:

C++Copy

```c++
const int i = 2;
```

You can then use this variable in another module as follows:

C++Copy

```c++
extern const int i;
```

But to get the same behavior in C++, you must declare your **`const`** variable as:

C++Copy

```c++
extern const int i = 2;
```

If you wish to declare an **`extern`** variable in a C++ source code file for use in a C source code file, use:

C++Copy

```c++
extern "C" const int x=10;
```

to prevent name mangling by the C++ compiler.