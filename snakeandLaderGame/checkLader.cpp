bool player::checkLader()
{
	static int i = 0;
l1:	if(pLoc<=laders[i][0])//fails check for next
	{
		if(pLoc == snakes[i][0])	
		{
			pLoc = laders[i][1];
			return 1;
		}
		return 0;
	}
	else
	{
		i++;
		goto l1;
	}
}
