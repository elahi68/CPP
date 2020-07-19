void Bingo :: initMatrix()
{
	int i,j;
	for(int k=1;k<=25;k++)
	{
		do
		{
			j = rand()%5;
			i = rand()%5;
		}while(arr[i][j]!=0);
		arr[i][j] = k; 
	}
}
