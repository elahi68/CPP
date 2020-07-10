#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void printOdd()
{
	int i;	
	for(i=0;i<10;i++)
	{
		if(i%2==1)
			printf("%d\n",i);
	}
}
void printEven()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
			printf("%d\n",i);
	}
}
int main() 
{	
	char *args[] = {"./child.o",NULL};
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
	wait(1);	
} 
