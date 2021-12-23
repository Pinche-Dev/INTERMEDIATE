# C++ program termination

<https://docs.microsoft.com/en-us/cpp/cpp/program-termination?view=msvc-160>

#programming #notes_from_articles #Cpp #Microsoft 

In C++, you can exit a program in these ways:

-   Call the [`exit`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/exit-exit-exit?view=msvc-160) function.
-   Call the [`abort`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/abort?view=msvc-160) function.
-   Execute a [`return`](https://docs.microsoft.com/en-us/cpp/cpp/return-statement-cpp?view=msvc-160) statement from `main`.

## `exit` function

The [`exit`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/exit-exit-exit?view=msvc-160) function, declared in <stdlib.h>, terminates a C++ program. The value supplied as an argument to `exit` is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully. You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, also defined in <stdlib.h>, to indicate success or failure of your program.

Issuing a **`return`** statement from the `main` function is equivalent to calling the `exit` function with the return value as its argument.

## `abort` function

The [`abort`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/abort?view=msvc-160) function, also declared in the standard include file <stdlib.h>, terminates a C++ program. **The difference between `exit` and `abort` is that `exit` allows the C++ run-time termination processing to take place (global object destructors get called), but `abort` terminates the program immediately. ** The `abort` function bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the [`atexit`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/atexit?view=msvc-160) function.

## `atexit` function

Use the [`atexit`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/atexit?view=msvc-160) function to specify actions that execute before the program terminates. No global static objects initialized before the call to `atexit` are destroyed before execution of the exit-processing function.



