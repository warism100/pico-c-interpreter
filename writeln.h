
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void writeln(char *input  ,char *cmd1)
{
         char *parentise_droit = NULL ;
         char *parentise_gauche = NULL ;
         memcpy (cmd1, input, 7); 
         parentise_droit  =  memchr (input, '('   ,strlen(input));
         parentise_gauche  = memchr (input , ')' , strlen(input)) ;

		if (strcmp(cmd1 , "writeln") == 0 && parentise_droit != NULL  && parentise_gauche  != NULL  )
		{
			for (int i =(strlen(input) -strlen(parentise_droit) +1) ; i < strlen(input) -2  ; i++)
 {
 printf ("%c",*( input + i));
 }
		}
	}

  
  
  
  