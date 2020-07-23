class player
{
	//can push this data to a structure and use DMA
	//player win then de-alloc
	private:string playerName;//this is for disp
		static int cnt;
		int playerNo;//this is for disp
		int pwin;//if pwin the player is removed
		int pLoc;//location of a player
		int pmove;//this is to help with first move or not
	public:	bool play();
		int diceRoll();
		bool checkSnake();
		bool checkLader();
		bool checkReached(int);
		player()
		{
			playerNo = ++cnt;
			cout<<"Enter player "<<playerNo<<" name:"<<endl;
		//	cin>>playerName;
			pwin = 0;
			pLoc = 0;
			pmove = 0;
		}
		~player()
		{
			//if using DMA
		}
	public: static int snakes[7][2];//10 snakes x gives which location snake is and Y gives which loc tail of snake is
		static int laders[7][2];//10 laders x gives which location ladder is and Y gives top of the ladder
};
int player :: snakes[7][2]={{17,7},{54,34},{64,60},{87,24},{93,73},{95,75},{99,78}};
int player :: laders[7][2]={{4,14},{9,31},{28,84},{40,59},{51,67},{63,81},{71,91}};
int player :: cnt =0;
