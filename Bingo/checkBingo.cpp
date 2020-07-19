int Bingo :: checkBingo()
{
	int i,j;
	if(move>4)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(arr[i][j] == 'X')
					continue;
				else
					break;
			}
			if(j==5)
			{
				cout<<"Won"<<endl;
				return 1;
			}
		}
	}
	return 0;
}
