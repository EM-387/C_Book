/* Edited off from ProgramFlow2 since
it had basically everything needed */

#include <stdio.h>

/* The "Type a letter on number:" has been moved to the
non main functions because otherwise it would print for
each invalid character */
void function1() {
	printf("I am function 1\nType a letter on number:");
}
void function2() {
	printf("I am function 2\nType a letter on number:");
}
void function3() {
	printf("I am function 3\nType a letter on number:");
}
void function4() {
	printf("I am function 4\nType a letter on number:");
}

int main()
{
	char input;
	printf("Type a letter on number:");
	while(input != 81 && input != 113) {

		scanf("%c", &input);

		switch(input) {
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
