#include <stdio.h>
#include <stdlib.h>

int main () {

	int man;
	int san;

	printf("Enter a number : ");
	
	scanf("%d", &man);

	if (man < 40)
		printf("%d is less than 40\n", man);

	else
		printf("Input a new number");

return 0;
}

