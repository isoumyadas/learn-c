#include <stdio.h>

int main(int argc, char *argv[]){
	
	printf("helllo, %s\n", argv[0]); // argv[0] gives you the file name which we are currently executing.
    // why the above line useful -> If we want to something self-referential like thanks for running my program or show documentation for your program and the name of your program, that depends on whatever the file itself is called.
	
	// argv[1] -> gives the argument that we had passed in CMD.
    printf("helllo, %s\n", argv[1]);
	
}