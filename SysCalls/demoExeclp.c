#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("ps with execlp\n");
	fork();
//	execlp("ps","ps",0);
	wait();
	printf("Done\n");
	exit(0);
}
