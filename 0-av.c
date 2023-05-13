#include "main.h"


/**
* main- entery point and function that prints all arguments .
* @argc: args number .
* @argv: array of args .
* Return: 0 code is good .
*/



int main(int argc, char **argv)
{
  while (*argv)
    {
      
      printf("%s\n", *argv);
      argv++;
    }


  return (0);
}
