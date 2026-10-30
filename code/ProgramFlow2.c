/* Edited off from ProgramFlow1 since
it had basically everything needed */

#include <stdio.h>

/* The functions are of void type just so I could remove
the "return 0" and made the code a bit shorter */
void function1(){
    printf("\nI am function 1\n");
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
    char input=2; // The starting value can be whatever, as long as it isnt 0, 81 or 113
    while(input != 81 && input != 113){ // Checks if input is Q or q, respectively
        if(input != 0){ // Without this check, it would print two times at a time instead of just one
            printf("Type a letter:");
            scanf("%c", &input);
            function1();
            function2();
            function3();
            function4();
        }
    }
    
    return 0;
}
