/*NoteA: Here it's supposed to the asterisk_control=i*2-1,
  but for some reason when that happens it gets stuck in a
  loop of printing * so I put the declaration outside the
  for loop */
#include <stdio.h>

int main()
{
    int height;
    int space_looper; // To print the correct space the correct amount of times
    int asterisk_control; // To determine the number of *s

    printf("Insert the triangle's height:");
    scanf("%i", &height);

    int space_reference = height - 1; // Change the target amount of spaces to print

    for(int i = 1; i != height+1; i++){

        space_looper=0;
        while(space_looper != space_reference){
            printf(" ");
            space_looper++;
        }

        asterisk_control = i*2;
        asterisk_control--;
        for(/* NoteA */; asterisk_control != 0; asterisk_control--){
            printf("*");
        }
        space_reference--;
        printf("\n");

    }

    return 0;
}
