#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int string_len);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
	int string_len = 0;
    for (i = 1; i < argc; i++) {
       	string_len = strlen(argv[i]);
		printf("Lengt of String: %d\n", string_len);
		print_letters(argv[i], string_len);
    }
}

void print_letters(char arg[], int string_len)
{
    int i = 0;
	//Bool x = 0;

    for (i = 0; i <= string_len; i++) {
        char ch = arg[i];
		
        if (can_print_it(ch)) {
            // x = can_print_it(ch);
		  	// printf("%d\n", x);
			 printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
