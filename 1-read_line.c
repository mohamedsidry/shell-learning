#include "main.h"



/**
* main - prompt to user asking for typing and print what was typed im new line .
*
*/



int main(void)
{

  char *buffer = NULL; /** no worties getline allocate !*/
  int bytes = 0;
  size_t bufsize;

  dprintf(STDOUT_FILENO,"$ : ");

  bytes  = getline(&buffer, &bufsize, stdin);


  if (bytes == -1)
    {
       dprintf(STDERR_FILENO,"COULD NOT HANDLE INPUT !\n");
    }

  
   bytes = write(STDOUT_FILENO, buffer, bytes);

   
  if (bytes == -1)
    {
       dprintf(STDERR_FILENO,"COULD NOT WRITE TO OUTPUT !\n");
    }
  free(buffer) ; /** get line does not free ! */

  return (0);
}
