gPlayer* addPlayer(gPlayer *ptr)
{
	gPlayer *temp=NULL,*newnode=NULL;
	newnode = new gPlayer;
	newnode->content = new player;
	if(!ptr)
	{
		ptr = newnode;
		ptr->next = ptr;
	}
	else
	{
		for(temp=ptr;temp->next!=ptr;temp=temp->next);
		temp->next = newnode;
		newnode->next = ptr;
	}
	return ptr;
}
