# Scope (c++)

#programming #notes_from_articles #Cpp #Microsoft 

When you declare a program element such as a class, function, or variable, its name can only be "seen" and used in certain parts of your program. The context in which a name is visible is called its _scope_. For example, if you declare a variable `x` within a function, `x` is only visible within that function body. It has _local scope_. You may have other variables by the same name in your program; as long as they are in different scopes, they do not violate the One Definition Rule and no error is raised.

For automatic non-static variables, scope also determines when they are created and destroyed in program memory.

There are six kinds of scope:

-   **Global scope** A global name is one that is declared outside of any class, function, or namespace. However, in C++ even these names exist with an implicit global namespace. The scope of global names extends from the point of declaration to the end of the file in which they are declared. For global names, visibility is also governed by the rules of [linkage](https://docs.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp?view=msvc-160) which determine whether the name is visible in other files in the program.
    
-   **Namespace scope** A name that is declared within a [namespace](https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-160), outside of any class or enum definition or function block, is visible from its point of declaration to the end of the namespace. A namespace may be defined in multiple blocks across different files.
    
-   **Local scope** A name declared within a function or lambda, including the parameter names, have local scope. They are often referred to as "locals". They are only visible from their point of declaration to the end of the function or lambda body. Local scope is a kind of block scope, which is discussed later in this article.
    
-   **Class scope** Names of class members have class scope, which extends throughout the class definition regardless of the point of declaration. Class member accessibility is further controlled by the **`public`**, **`private`**, and **`protected`** keywords. Public or protected members can be accessed only by using the member-selection operators (**.** or **->**) or pointer-to-member operators (**.******* or **->*******).
    
-   **Statement scope** Names declared in a **`for`**, **`if`**, **`while`**, or **`switch`** statement are visible until the end of the statement block.
    
-   **Function scope** A [label](https://docs.microsoft.com/en-us/cpp/cpp/labeled-statements?view=msvc-160) has function scope, which means it is visible throughout a function body even before its point of declaration. Function scope makes it possible to write statements like `goto cleanup` before the `cleanup` label is declared.