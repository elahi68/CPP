#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void Odd()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2)
			printf("%d\n",i);
	}
}
int main()
{
	char *arg1[]={"./even",NULL};
	char *arg2[]={"./odd",NULL};
	pid_t pid = fork();
	if(pid == 0)
	{
		execv(arg1[0],arg1);
	}
	else
	{
		Odd();
		execv(arg2[0],arg2);

	}
	wait(1);
}
