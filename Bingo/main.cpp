#include"header.h"
int main()
{
	srand(getpid());
	gBingo *head = NULL,*temp=NULL;
	int arr[MAX*MAX]={0};//sys matrix here
	int noOfPlayers,cnt=0,cnt2=0,n;

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
		cout<<"Ball being picked"<<endl;
		sleep(2);
		cout<<"Ball picked:"<<arr[i]<<endl;
		Bingo::move++;
		temp = head;
		do
		{
			temp->content->play(arr[i]);
			temp = temp->next;
		}while(temp!=head);
		
		temp = head;
		do
		{
			temp->content->display();
			temp = temp->next;

		}while(temp!=head);
		sleep(10);
		if(Bingo::pWin >= 1)
			break;
	}
	//display all the players again
}
