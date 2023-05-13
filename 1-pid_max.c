#include "main.h"



/**
*
*
*
*/


int main(void)
{
  char *buffer;
  int bufsize = 1024;
  char *filepath = "/proc/sys/kernel/pid_max";
  int bytes,w_bytes;
  ssize_t fd;

  
  fd = open(filepath, O_RDONLY);

  if (fd == -1)
    {
      dprintf(STDERR_FILENO,"COULD NOT OPEN : %s\n", filepath);
      exit(404);
    }

  buffer = malloc(sizeof(char) * bufsize);

  if (buffer == NULL)
    {
      dprintf(STDERR_FILENO,"COULD NOT ALLOCATE IN MEMORY \n");
      exit(97);
    }

  bytes = read(fd, buffer, bufsize);

  if (bytes == -1)
    {
      dprintf(STDERR_FILENO,"COULD NOT READ TO BUFFER !\n");
      exit(98);
    }

  w_bytes = write(STDOUT_FILENO, buffer, bytes);

  
  if (w_bytes == -1)
    {
      dprintf(STDERR_FILENO,"COULD NOT WRITE TO STDOUT !\n");
      exit(99);
    }
  free(buffer);
  close(fd);
  return (0);
}
