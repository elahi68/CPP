#include<iostream>
using namespace std;

int main()
{
	const int a1=10;
	const int *b1 = &a1;
	int *d1 = const_cast<int*>(b1);
	*d1 = 20;/*undefined but sometimes works fine but dont use,it is not  allowed in cpp*/
	cout<<*d1<<endl;
	cout<<a1<<endl;/*this will be different with d1 since optimization since const*/
	
	/* 1. when the actual reffered obj is not const*/
	int a2 = 20;
	const int *b2 = &a2;
	int *d2 = const_cast<int*>(b2);
	*d2=30;

	/*2.	when we need to call some lib wher it is taking var/obj as non-const but not changing it.
	 *   	const int x = 20;
	 *   	const int *px = &x;
	 *   	third_party_lib(const_cast<int*>(px);
	 *   
	 *   	if not casted then error.
	 *   	function should not change the data if changed then it will be undefined like 1st example
	 * */

	/*3.	volatile - tells compiler for no optimisation
	 * 	
	 *
	 *
	 *
	 *
	 * */


}
