#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==1)
			fprintf(stderr,"%d ",i);
		sleep(1);
	}
}
