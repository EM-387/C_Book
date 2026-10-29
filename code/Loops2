/* Edited off from Loops1 since it
had basically everything needed */

#include <stdio.h>

int main()
{
    
    int side_length;
    int column;
    int i; // i is defined outside of the first for loop so it can be used by the second one
    
    printf("Insert the height of the triangle (it must be less than 20):");
    take_value:
    scanf("%i", &side_length);
    if(side_length > 20){
        printf("Value too big, try again:");
        goto take_value;
    }
    printf("\n");

    for(i=0; i != side_length+1 ; i++){
        
        column = 0;
        while( column != i){
            printf("*");
            column++;
        }
        printf("\n");
        
    }

    for(i; i != 0 ; i--){ // The same as the first for loop, except it works backwards
        
        column = 0;
        while( column != i){
            printf("*");
            column++;
        }
        printf("\n");
        
    }

    return 0;
}
