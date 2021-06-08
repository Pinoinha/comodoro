#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void 
main(int argc, char* argv[]) {
	for(int i = 0; i < argc; i++) {
		puts(argv[i]);
	}

	char* command;
	strncpy(command, "echo \"Funciona!\"", 40);
	system(command);
}
