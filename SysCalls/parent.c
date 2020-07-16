#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
char buff[1000];
void printOdd()
{
	int i;	
	for(i=0;i<500;i++)
	{
		if(i%2==1)
			fprintf(stderr,"%d ",i);
		sleep(1);
	}
}
void printEven()
{
	int i;
	for(i=0;i<500;i++)
	{
		if(i%2==0)
			fprintf(stderr,"%d ",i);
		sleep(1);
	}
}
int main() 
{	
	char *args[] = {"./a.out",NULL};
	int i;
	pid_t pid = fork();
	if (pid == 0) 
	{
		printOdd();
	} 
	else 
	{ 
	       printEven();
	}
} 
