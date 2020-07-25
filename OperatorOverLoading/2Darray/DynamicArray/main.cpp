#include<iostream>
using namespace std;
#include<unistd.h>
#include<sys/types.h>
#include"header3.h"
int main()
{
	int row,col;
	Matrix m1(2,2),m2(2,2),m3;
	m3 = m1*m2;
	m1.display();
	cout<<endl;
	m2.display();
	cout<<endl;
	m3.display();
	cout<<endl;
	/*while(1)
	{
		//re enter here your matrices
		while(1)
		{
			//menu here
			//choise
			switch(ch)
			{
				//addd
				//sub
				//mul

			}
			if(re_enter==1)
				break;
		}
	}*/
}
