/* 0. unique_ptr is a class template
 * 1. c++11 --> avoids memory leaks
 * 2. wraps a raw pointer in it and de-alloc the raw ptr
 * 3. similar to actual ptr we can use -> and * operator using unique_ptr obj
 * 4. when exception it de-alloc memory
 * 5. we can create array of unique_ptr objects 
 *
 * ----------
 * Operations
 * ----------
 *  release, reset, swap, get, get_delecter
 *
 * */

#include<iostream>
#include<memory>


using namespace std;

class foo{
	int x;
	public:
	explicit foo(int x): x{x} 
	{
		cout<<"Calling foo const\n";
	}
	int getX() {return x; }

};

int main()
{
	unique_ptr<foo> p1(new foo(10)); /*no exception safty*/

	unique_ptr<foo> p2 = make_unique<foo>(10); /*exception safty*/
	cout<<p1->getX()<<endl;

}
