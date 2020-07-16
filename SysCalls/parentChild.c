#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int i,j;
	char *args[]={"./odd.o",NULL};
	pid_t pid = fork();
	if(pid==0)
	{
		for(j=0;j<10;i++)
		{
			if(i%2==0)
				printf("%d\n",i);
		}
	}
	else
	{
		for(i=0;i<10;i++)
		{
			if(i%2==0)
				printf("%d\n",i);
		}
		exit(0);
	}
}
