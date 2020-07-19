class Bingo
{
	static int cnt;
	int player;
	int win;
	int arr[MAX][MAX];
	public:static int move,pWin;
	       void display();
	       void mark(int);
	       int checkBingo();
	       void initMatrix();
	       void play(int);
	       Bingo()
	       {
		       player = ++cnt;
		       move = 0;
		       win = 0;
		       arr[MAX][MAX] = {0};
		       initMatrix();
	       }

};
int Bingo :: cnt = 0;
int Bingo :: pWin = 0;
int Bingo :: move = 0;
#include"display.cpp"
#include"mark.cpp"
#include"checkBingo.cpp"
#include"initMatrix.cpp"
#include"play.cpp"
