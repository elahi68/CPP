#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(char *argv[],int argc)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("child:%d\n",i);
	}
}
