#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	//printf("%d\n", argc);	
	printf("%s\n", argv[1]);

	char * cmd[argc];
	for(int c = 0; c < argc - 1; c = c + 1)
	{
		cmd[c] = argv[c + 1]; 	
		//printf("%s\n",cmd[c]);
	}

	//cmd[argc] = "NULL";
	//printf("%s\n",cmd[argc - 1]);
	execvp(cmd[0], cmd);
	//printf("%s\n", cmd[0]);
	
	
	//execvp(argv[0], argv);	
	//execvp(argv[0], argv);

    	exit(EXIT_FAILURE);
}

























