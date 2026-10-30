/* Edited off from ProgramFlow2 since
it had basically everything needed */

#include <stdio.h>

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
    char input;
    while(input != 81 && input != 113){
      
        printf("Type a letter on number:");
        scanf("%c", &input);
        
        switch(input){
        case 49: // If the input is 1
            function1();
            break;
        case 50: // If the input is 2
            function2();
            break;
        case 51: // If the input is 3
            function3();
            break;
        case 52: // If the input is 4
            function4();
            break;

        }
    }
    
    return 0;
}
