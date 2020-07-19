gBingo* addPlayer(gBingo *ptr)
{
	gBingo *newnode=NULL, *temp=NULL;
	newnode = new gBingo;
	newnode->content = new Bingo;
	newnode->content->display();	
	if(ptr == NULL)
	{
		ptr = newnode;
		newnode->next = ptr;
	}
	else
	{
		for(temp=ptr;(temp->next)!=ptr;temp=temp->next);
		temp->next = newnode;
		newnode->next = ptr;
	}
	return ptr;
}
