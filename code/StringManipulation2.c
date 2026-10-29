/* Edited off from StringManipulation1 since
it had basically everything needed */

#include <stdio.h>

int main()
{
	int character_limit= 100;
	char string_input[character_limit];

	for(int i=0; i!=character_limit; i++){
	    string_input[i] = 0;
	}

	printf("Type your word (maximum length of %i characters):", character_limit);
	scanf("%[^\n]s", string_input);

	for(int i=0; i!=character_limit; i++) {

        /* I used a switch instead of
          if(string_input[i] > 0){
              if(string_input[i] == 32){
                  printf("\n");
              }else{
                  printf("%c", string_input[i]);
              }
          }
          to make the code prettier and easier to read */
        switch(string_input[i]){
        default:
            printf("%c", string_input[i]);
        break;
        
        case 32:
            printf("\n");
        break;
        
        case 0:
        break;
        }


	}

	printf("\n");
	return 0;
}
