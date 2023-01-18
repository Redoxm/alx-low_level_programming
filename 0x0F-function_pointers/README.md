In C, a function pointer is a pointer variable that stores the memory address of a function. It can be used to call a function indirectly, by dereferencing the pointer. Function pointers are typically declared with the same syntax as a regular function, but with an asterisk (*) before the function name. For example: int (*function_pointer)(int, int); This declares a function pointer named "function_pointer" that takes two int parameters and returns an int. The address of a specific function can be assigned to this pointer using the address-of operator (&):

function_pointer = &add;

where add is a function defined as int add(int a, int b) and the function can be called using the function pointer:

int result = function_pointer(1, 2);

Function pointers can also be used as parameters for other functions, and can be stored in arrays or passed as elements of structs or classes.
