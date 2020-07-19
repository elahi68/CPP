void Bingo :: display()
{
	cout<<endl;
	for(int i=0;i<5;i++,cout<<endl)
	{
		cout<<"| ";
		for(int j=0;j<5;j++)
		{
			if(arr[i][j]=='X')
				printf("%-3c ",arr[i][j]);
			else
				printf("%-3d ",arr[i][j]);
		}
		cout<<" |";
	}
}
