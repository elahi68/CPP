int checkForExistingMove(int,int);
void display(void)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf(" %c | %c | %c ",ptr[i][0],ptr[i][1],ptr[i][2]);
		printf("\n-----------\n");
	}
	printf("\n");
}
void userMove(void)
{
	static int usr=0;
	int ch,inc=0,i,j;
	char toeCh;
	while(1)
	{
		i=0;j=0;
		inc=0;
		printf("Choose one place to cross(X):");
		scanf("%d",&ch);
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				inc++;
				if(ch == inc)
					break;
			}
			if(ch == inc)
				break;
		}
		if(checkForExistingMove(i,j))
		{
			printf("Move is already exist\n");
			continue;
		}
		else
		{
			printf("i:%d j:%d\n",i,j);
			ptr[i][j]='X';
			return;
		}
		if(usr==4||usr==5)//if all boxes are checked
			return;
	}
}
int checkForExistingMove(int i,int j)//checks for O and X
{
	if(ptr[i][j]=='X' || ptr[i][j]=='O')//existing move return 1
		return 1;
	return 0;//no data then 0
}
void comMove(void)
{
	int i,j;
	static int com;
	while(1)
	{
		i=rand()%3;
		j=rand()%3;
		if(!checkForExistingMove(i,j))
		{
			printf("i:%d j:%d\n",i,j);
			ptr[i][j]='O';
			com++;
			/*
			 *
			 * */
			return;
		}
		if(com>4)
			return;
	}
	return;
}
int checkForBingo()
{
	static int move=0;
	int i,j;
	move++;
	for(i=0;i<3;i++)
	{
		if(ptr[i][0] == 'O' && ptr[i][1] == 'O' && ptr[i][2] == 'O')	return 1;//com
		else if(ptr[i][0] == 'X' && ptr[i][1] == 'X' && ptr[i][2] == 'X')	return 1;//user
	}
	for(i=0;i<3;i++)
	{
		if(ptr[0][i] == 'O' && ptr[1][i] == 'O' && ptr[2][i] == 'O')	return 1;//com
		else if(ptr[0][i] == 'X' && ptr[1][i] == 'X' && ptr[2][i] == 'X')	return 1;//user
	}

	if(ptr[0][0] == 'O' && ptr[1][1] == 'O' && ptr[2][2] == 'O')	return 1;//com
	else if(ptr[0][0] == 'X' && ptr[1][1] == 'X' && ptr[2][2] == 'X')	return 1;//user

	if(ptr[0][2] == 'O' && ptr[1][1] == 'O' && ptr[2][0] == 'O')	return 1;//com
	else if(ptr[0][2] == 'X' && ptr[1][1] == 'X' && ptr[2][0] == 'X')	return 1;//user
	return 0;
}
