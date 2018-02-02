#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };//names is an array of character pointers

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

	printf("First Method\n");
    // first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;//we need double ** because * char is already a pointer. Inside you have an array of pointers to char. 

    // second way using pointers - This is not recommended, use them as arrays
	printf("second method\n");
	for (i = 0; i < count; i++) {
        printf("%s (%p) is %d (%p) years old.\n",
                *(cur_name + i), (cur_name + i), *(cur_age + i), (cur_age + i));
    }
	printf("Print pointer cur_name: %p, and cur_age: %p\n", cur_name, cur_age);
    printf("---\n");

    // third way, pointers are just arrays
    
	printf("Third Method:\n");
	for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

	printf("Print pointer cur_name: %p, and cur_age: %p\n", cur_name, cur_age);
    printf("---\n");
	printf("Fourth way to print pointers\n");
    // fourth way with pointers in a stupid complex way
    for (cur_name = names, cur_age = ages;
            (cur_age - ages) < count; cur_name++, cur_age++) {
    	 printf("(cur_age - ages:) %ld\n", (cur_age - ages));
		 printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

	printf("Print pointer cur_name: %p, and cur_age: %p\n", cur_name, cur_age);
    return 0;
}
