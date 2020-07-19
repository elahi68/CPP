struct gameBingo;
typedef struct gameBingo gBingo;
struct gameBingo
{
	Bingo *content;
	gameBingo *next;
};
