# include <stdio.h>


int main(int argc, char *argv[] )
{

	if(argc== 1){
		printf("You only have one argument");
	} else if(argc > 1 && argc < 4){
		printf("Here are your arguments");
		
		int i = 0;
		for (i =0; i < argc; i++){
			printf("argument %d is: %s\n", i , argv[i]);
		}

	} else{
		printf("You have too many arguments!\n");
	}



}
