bool player::checkSnake()
{
	static int i = 0;
l1:	if(pLoc<=snakes[i][0])//fails check for next
	{
		if(pLoc == snakes[i][0])	
		{
			pLoc = snakes[i][1];
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
