Sarah-okolo
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x06-pointers_arrays_strings/102-magic.c
@Sarah-okolo
Sarah-okolo made all the files in this directory executable
 1 contributor
Executable File  23 lines (21 sloc)  430 Bytes
#include <stdio.h>

int main(void)
{	
int n;
int a[5];
int *p;

 a[2] = 1024;
 p = &n;
  /*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
 *(p + 5) = 98;
 /* ...so that this prints 98\n */
 printf("a[2] = %d\n", a[2]);
 return (0);
}
