#include<stdio.h>
#include<unistd.h>
static int i;
int main()
{
	char *argv[]={"./a.out",NULL};
	printf("Starting data : %d\n",++i);
	if(fork()==0)
	execv(argv[0],argv);
	else
	printf("End Data : %d\n",++i);
}
