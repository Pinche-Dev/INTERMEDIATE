Primary Operators are building blocks of more complex operations

They may be literals, names, and names qualified by the scope-resolution operator (`::`). A primary expression may have any of the following forms:

_`primary-expression`_  
 _`literal`_  
 **`this`**  
 _`name`_  
 **`::`** _`name`_ **`(`** _`expression`_ **`)`**
 
 A _`literal`_ is a constant primary expression. Its type depends on the form of its specification. For complete information about specifying literals, see [Literals](https://docs.microsoft.com/en-us/cpp/cpp/numeric-boolean-and-pointer-literals-cpp?view=msvc-160) .

The **`this`** keyword is a pointer to a class object. It's available within nonstatic member functions. It points to the instance of the class for which the function was invoked. The **`this`** keyword can't be used outside the body of a class-member function.

