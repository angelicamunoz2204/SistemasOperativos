#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	if(argc <  2)
	{
		printf("No hay argumentos\n");
		return 1; 
	}
	else 
	{
		int bytes = atoi(argv[1]);
		int *arreglo = malloc(bytes*1024*1024*(sizeof(int)));
			if (arreglo == NULL)
			{
				printf("Memoria no asignada\n");
				exit(-1);
			}
			
			for(int i=0; i< bytes*1024*1024; i++)
			{
				arreglo[i] = i;
			}
			sleep(10);
			return 0;
	}
}
