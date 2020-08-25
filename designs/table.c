#include<stdio.h>
void printLine()
{
	int i;
	for(i=0;i<120;i++)
		printf("-");
}
void printCenter()
{
	printf("|");
}
int main()
{
	int i,j=0,k=0;
	char a[][10]={"Name","Roll","Class","Marks 1","Marks 2","Marks 3","Marks 4","Marks 5","Marks 6","Total","Prcentage","Grade"};
	printLine();
	printf("\n");
	for(i=0;i<=120;i++)
	{
		if(i%10==0||i==0)
			printCenter();
		else
		{
			if(a[j][k])
			{
				printf("%c",a[j][k++]);
			}
			else
				printf(" ");
		}
		if((a[j][k]==0) && (i%10==0))
		{
			k=0;j++;
		}
	}
	printf("\n");
	printLine();
	printf("\n");
}
