#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<sys/types.h>
int main()
{
	int i;
	struct timespec tim1,tim2;
	tim1.tv_sec = 0;
	tim1.tv_nsec = 20*1000000L;
	char *args[]={"./odd.o",NULL};
	pid_t pid = fork();
	if(pid==0)
	{	
		execv(args[0],args);
	}
	else
	{
		for(i=0;i<500;i++)
		{
			if(i%2==0)
				fprintf(stderr,"%d ",i);
			nanosleep(&tim1,&tim2);
		}
	}
	wait(0);

}
