There are _pointers_ and _values_:

-A pointer is a **variable that stores the memory address of another variable** as its value.
-Variables are **containers for storing data values**(Ex.: integers).

The asterisk turns a pointer into a value:

`int number = *point; // integer «number» is assigned with integer value that pointer «point» is pointing to`

The ampersand turns a value into a pointer:

`int* point = &number; // pointer «point» will point to the integer «number»`
