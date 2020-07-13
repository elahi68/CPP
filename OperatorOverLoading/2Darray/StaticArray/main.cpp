#include<iostream>
using namespace std;
#include"classHeader.h"
int main()
{
	Array obj1,obj2,obj3(obj2),obj4;
	obj1.display();
	cout<<endl;
	
	obj2.display();
	cout<<endl;
	
	obj3 = obj1+obj2;
	cout<<"add: ";
	obj3.display();
	
	obj4 = obj3 = obj1-obj2;
	cout<<"sub:obj3 ";
	obj3.display();
	
	cout<<"sub:obj4 ";
	obj3.display();

	obj3 = obj1*obj2;
	cout<<"Mul: ";
	obj3.display();
	cout<<endl;
}
