#include <readln.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <writeln.h>
int main()
{
	char *str;
	char *cmd1;
	char *cmd2;
	cmd2 = malloc(50  * sizeof(char));
	cmd1 = malloc(50 * sizeof(char));
	str = malloc(2048 * sizeof(char));
	while (1)
	{

		printf("\n->  ");
		fgets(str, 2048, stdin);
		readln_string(str, cmd2);
		writeln (str , cmd1) ;
	}

	return 0;
}