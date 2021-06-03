/* This program tests the usage of the system() function in C */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char command[30];

	strcpy(command, "ls -lha");
	system(command);

	return 0;
}
