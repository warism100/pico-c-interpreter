
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void readln_string ( char *) ;
void readln_string (char *input , char *cmd2)
{	
  int var ;
		char * deux_point  = NULL ;
       memcpy (cmd2, input, 6); 
        deux_point  =  memchr (input, ':'   ,strlen(input));
			
		if (strcmp(cmd2 , "readln") == 0 &&  deux_point != NULL )
			{
				printf("   :    ");
			scanf("%d" , &var) ;
			printf("%d" , var) ;

			}
}