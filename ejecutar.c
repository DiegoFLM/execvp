#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	//printf("%d\n", argc);	
	//printf("%s\n", argv[0]);

	char* cmd[argc];
	int c;
	for(c = 0; c < argc - 1; c = c + 1)
	{
		cmd[c] = argv[c + 1]; 	
		//printf("cmd [ %d ]: %s\n", c, cmd[c]);
	}

	cmd[argc - 1] = NULL;
	//printf("%s\n",cmd[argc - 1]);
	
	execvp(cmd[0], cmd);
	//printf("%s\n", cmd[0]);
	
	printf("\nNo se ejecutó execvp cmd\n");
	
    	exit(EXIT_FAILURE);
}

























