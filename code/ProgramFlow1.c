#include <stdio.h>

/* The functions are of void type just so I could remove
the "return 0" and made the code a bit shorter */
void function1(){
    printf("I am function 1\n");
}
void function2(){
    printf("I am function 2\n");
}
void function3(){
    printf("I am function 3\n");
}
void function4(){
    printf("I am function 4\n");
}

int main()
{
    printf("I am the main function\n");
    function1();
    function2();
    function3();
    function4();
    
    return 0;
}
