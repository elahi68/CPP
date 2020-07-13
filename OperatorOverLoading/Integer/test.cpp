#include<iostream>
using namespace std;
class Integer
{
	int data;
	public:	Integer(int);
		Integer()
		{
			data = 0;
		}
		void operator=(int i)
		{
			cout<<"assign"<<endl;
			data = i;
			return;
		}
		Integer operator+(const Integer&);
		friend ostream& operator<<(ostream& os,const Integer& i);

};
Integer :: Integer(int i)
{
	cout<<"const"<<endl;
	data = i;
}
ostream& operator << (ostream& os,const Integer& i)
{
	os<<i.data;
	return os;
}
Integer Integer :: operator+(const Integer &i)
{
	Integer temp;
	temp.data = i.data + data;
	return temp;
}
int main()
{
	Integer a(30),b=40,c;
	cout<<"a: "<< a <<endl;
	cout<<"b: "<< b <<endl;
	c = a+b;
	cout<<"c: "<< c <<endl;
}








