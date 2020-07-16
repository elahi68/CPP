#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char *args[] = {"./odd.o",NULL};
	pid_t pid = fork();
	if(pid==0)
	{
	execvp(args[0],args);
	}
	else
	{
	for(i=0;i<10;i++)
		printf("parent:%d\n",i);
	}
	wait(NULL);
}
