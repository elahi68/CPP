#include<iostream>
using namespace std;
class dummy
{
	protected: int var;
	public:void changevar(int val)
	       {
		       var=val;
		       cout<<"var: "<<var<<endl;
	       }
	       void changeProtected()
	       {
		       cout<<"in change function:";
		       var++;
		       cout<<"var: "<<var;
	       }
	       friend void fun(dummy&);
};
void fun(dummy &d)
{
	d.changeProtected();
}
int main()
{
	dummy d;
	d.changevar(5);
	fun(d);
}
