#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
char ptr[3][3]={0};
#include"header.h"
int main()
{
	srand(getpid());
	int cnt=0;
	if(rand()%2)
	{
		printf("User will start the game\n");
		while(1)
		{
			userMove();
			printf("User Move\n");
			display();
			if(checkForBingo())
			{
				printf("User wins\n");
				display();
				break;
			}
			cnt++;
			comMove();
			printf("Com Move\n");
			display();
			if(checkForBingo())
			{
				printf("Coms wins\n");
				display();
				break;
			}
			if(cnt>4)//combined moves of com and user 
			{
				printf("Its a Tie\n");
				display();
				break;
			}
		}
	}
	else
	{
		printf("Com starts the game\n");
		while(1)
		{
			comMove();
			printf("Com Move\n");
			display();
			if(checkForBingo())
			{
				printf("Com wins\n");
				display();
				break;
			}
			cnt++;
			userMove();
			printf("User Move\n");
			display();
			if(checkForBingo())
			{
				printf("User wins\n");
				display();
				break;
			}
			if(cnt>4)//combined moves of com and user 
			{
				printf("Its a Tie\n");
				display();
				break;
			}
		}
	}
}
