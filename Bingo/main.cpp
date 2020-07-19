#include"header.h"
int main()
{
	gBingo *head = NULL,*temp=NULL;
	int arr[MAX*MAX]={0};//sys matrix here
	int noOfPlayers,cnt=0,cnt2=0;

	//Inputting no of players here
	cout<<"Enter no of players:";
	cin>>noOfPlayers;

	//Initilizing players
	do
	{
		head = addPlayer(head);
		cnt++;
	}	
	while(cnt<noOfPlayers);
	//game starts here
	initMasterMatrix(arr);
	for(int i =0;i<MAX*MAX;i++)
	{
		Bingo::move++;
		temp = head;
		do
		{
			temp->content->play(arr[i]);
			temp = temp->next;
		}while(temp!=head);
		if(Bingo::pWin >= 1)
			break;
	}
	//display all the players again
	temp = head;
	do
	{
		temp->content->display();
		temp = temp->next;

	}while(temp!=head);
}
