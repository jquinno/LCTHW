#include <stdio.h>


int main(int argc, char *argv[])
{
	char char_test = '¨';
	printf("The char %c is in int: %d\n", char_test, (int)char_test);

	return 0;
}