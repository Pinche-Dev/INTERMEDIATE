# functions

## parts of a functions
A C++ function definition consists of a function header and a function body. Here are all the parts of a function −

### Return Type 
− A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.

### Function Name
− This is the actual name of the function. The function name and the parameter list together constitute the function signature.

### Parameters 
− A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

### Function Body 
− The function body contains a collection of statements that define what the function does.

## calling a functions
A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

1	Call by Value
This method copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.

2	Call by Pointer
This method copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.

3	Call by Reference
This method copies the reference of an argument into the formal parameter. Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.

