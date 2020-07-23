#include"includeAll.h"
int main()
{
	srand(getpid());
	int nPlayer=0,nWin=0;
	gPlayer *head=NULL,*temp=NULL;
	cout<<"Enter no of players:";
	cin>>nPlayer;
	for(int i=0;i<nPlayer;i++)
		head = addPlayer(head);
	temp = head;
	while(nWin!=(nPlayer-1))
	{
		temp = head;
		do
		{
			if(temp->content->play())
			{
				nWin++;
				//remove that player here
			}
			temp=temp->next;
		}while(temp!=head);
	}
	cout<<"nWin: "<<nWin<<endl;
}
