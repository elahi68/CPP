#include<iostream>
using namespace std;
#include"header.h"
int main()
{
	Array ob1,ob2,ob3;
	ob1.display();
	cout<<endl;
	
	ob2.display();
	cout<<endl;
	
	ob3 = ob1+ob2;
	ob3.display();
	cout<<endl;
	//ob4.display();
	//cout<<endl;
}
