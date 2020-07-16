#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	int i;
	char *args[]={"./odd.o",NULL};
	pid_t pid = fork();
	if(pid==0)
	{	
		execv(args[0],args);
	}
	else
	{
		for(i=0;i<10;i++)
		{
			if(i%2==0)
				fprintf(stderr,"%d ",i);
			sleep(1);
		}
	}

}
