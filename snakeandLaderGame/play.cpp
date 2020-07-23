bool player::play()
{
	int n;
	if(!pwin)//play untill reaches 100;
	{
		n = diceRoll();
		cout<<"Dice is Rolling"<<endl;
		sleep(5);
		cout<<"Dice Rolled for player "<<playerName;
		cout<<"  Number is "<< n <<endl;
		if(!pLoc)
		{
			if(n==6)
			{
				cout<<"Your Location is 6! "<<playerName<<endl;
				pLoc+=n;
			}
			else
				cout<<"To start the game you should get a 6 :/"<<endl;
			return false;
		}
		//after first move
		if(pLoc>=94)
		{
			/*reched if dice roll is and pLoc is greater than 100 then no chance to move*/
			if(checkReached(n))
			{
				pwin = 1;
				cout<<"You Won!! "<<playerName<<endl;
				return true;
			}
			else
			{
				cout<<"Dice roll out More than Your Goal \n :/ Wait for another chance"<<endl;
				return false;
			}
		}
		pLoc+=n;
		if(checkSnake())//check and change pLoc 
		{
		/*	cout<<"You have encounted a snake"<<endl;
			cout<<"Your new position is: "<<pLoc<<endl;	*/
		}
		else if(checkLader())//check and change pLoc
		{
		/*	cout<<"You have encounted a lader"<<endl;
			cout<<"Your new position is: "<<pLoc<<endl;		
		*/}
		else
		{
			cout<<"Your new Position is:"<<pLoc<<endl;
		}
		return false;
	}
	return false;
}
