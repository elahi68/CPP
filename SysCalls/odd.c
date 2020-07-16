#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
	int i;
	struct timespec tim1,tim2;
	tim1.tv_sec = 0;//0 seconds and
	tim1.tv_nsec = 20*1000000L;// 20 micro sec delay is created
	for(i=0;i<500;i++)
	{
		if(i%2==1)
			fprintf(stderr,"%d ",i);
		nanosleep(&tim1,&tim1);
	}
}
