void initMasterMatrix(int *arr)
{
	int i,j;
	for(int k=1;k<=25;k++)
	{
		do
		{
			i = rand()%25;
		}while(arr[i]!=0);
		arr[i] = k; 
	}

}
