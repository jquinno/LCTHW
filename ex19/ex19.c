#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void test_debug()
{
	//notice you dont need the \n
	debug("I have Brown Hair.");

	//passing in arguments like printf
	debug("I am %d years old.", 37);

}

void test_log_err()
{
	log_err("I believe everything is broken");
	log_err("There are %d problems in %s.", 0, "space");
}


int main(int argc, char *argv[]) {

	check(argc == 2, "Need an argument");

	test_debug();
	test_log_err();
	//stopped video at 6:50
	
	return 0;

	error:
		return 1;
}