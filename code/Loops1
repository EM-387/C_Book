#include <stdio.h>

int main()
{
    int side_length;
    int column;

    // The limit is merely arbitrary
    printf("Insert the height of the triangle (it must be less than 20):");
    take_value:
    scanf("%i", &side_length);
    if(side_length > 20){
        printf("Value too big, try again:");
        goto take_value;
    }
    printf("\n"); // To give space between the input prompt and the triangle

    // The for loop takes care of the height and the while loop takes care of the width
    for(int i=0; i != side_length+1 ; i++){

        column = 0;
        while( column != i){
            printf("*");
            column++;
        }
        printf("\n");

    }

    return 0;
}
