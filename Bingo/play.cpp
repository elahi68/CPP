void Bingo :: play(int n)
{
	if(win == 0)//user still marking X on his matrix
	{
	//move - chooses one number here
	//make one number as X
	mark(n);
	//check for Bingo after 4 th move
	if(checkBingo())
	{
		win = 1;
		pWin++;//indicates which no of player to win 1,2.
		cout<<"player "<<player<<" wins";
		display();		
	}
	return;
}
}
