#include "main.h"






/**
* main - entry point function that prints perent process id .
*
* Return : 0 code is good
*/

int main(void)
{

  pid_t ppid;



  ppid = getppid();


  dprintf(STDOUT_FILENO, "PPID IS : %u\n",ppid);
  return(0);
}
