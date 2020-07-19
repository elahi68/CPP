void Bingo :: mark(int input)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j] == input)
			{
				arr[i][j] = 'X';
				return;
			}
		}
	}
}
