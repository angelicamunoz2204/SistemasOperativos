#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv)
{
  
  pid_t pid;
  pid = fork();

  int x = 20;

  if(pid==0)
  {
	x=fibonacci(x);
        guardarEntero("archivo",x);
  }
  else
  {
	pid_t pidII;
	pidII = wait(NULL);
	int n,m;
	n = leerEntero("archivo");
	m = n * 100;
	printf("El valor de fibonacci de (%d) es:(%d)\n ",n,m);
  }

  return 0;
}


