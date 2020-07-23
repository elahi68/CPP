bool player::checkReached(int ndice)
{
	if((ndice+pLoc) == 100)
		return 1;
	else 
		return 0;
}
