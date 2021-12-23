#programming #notes_from_articles #Cpp #Microsoft 

# Extern (c++)

The **`extern`** keyword may be applied to a global variable, function, or template declaration. It specifies that the symbol has _external linkage_. For background information on linkage and why the use of global variables is discouraged, see [Translation units and linkage](https://docs.microsoft.com/en-us/cpp/cpp/program-and-linkage-cpp?view=msvc-160).

## extern linkage for non-const globals

When the linker sees **`extern`** before a global variable declaration, it looks for the definition in another translation unit. Declarations of non-**`const`** variables at global scope are external by default. Only apply **`extern`** to the declarations that don't provide the definition.


```c++
//fileA.cpp
int i = 42; // declaration and definition

//fileB.cpp
extern int i;  // declaration only. same as i in FileA

//fileC.cpp
extern int i;  // declaration only. same as i in FileA

//fileD.cpp
int i = 43; // LNK2005! 'i' already has a definition.
extern int i = 43; // same error (extern is ignored on definitions)
```

## [](https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-160#extern-linkage-for-const-globals)extern linkage for const globals

A **`const`** global variable has internal linkage by default. If you want the variable to have external linkage, apply the **`extern`** keyword to the definition, and to all other declarations in other files:


```
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

## [](https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-160#extern-constexpr-linkage)extern constexpr linkage

In Visual Studio 2017 version 15.3 and earlier, the compiler always gave a **`constexpr`** variable internal linkage, even when the variable was marked **`extern`**. In Visual Studio 2017 version 15.5 and later, the [/Zc:externConstexpr](https://docs.microsoft.com/en-us/cpp/build/reference/zc-externconstexpr?view=msvc-160) compiler switch enables correct standards-conforming behavior. Eventually the option will become the default. The [/permissive-](https://docs.microsoft.com/en-us/cpp/build/reference/permissive-standards-conformance?view=msvc-160) option doesn't enable **/Zc:externConstexpr**.


```c++
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

If a header file contains a variable declared **`extern`** **`constexpr`**, it must be marked `__declspec(selectany)` to correctly have its duplicate declarations combined:


```c++
extern constexpr __declspec(selectany) int x = 10;
```