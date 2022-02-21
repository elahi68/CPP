/*
 * 0. Smart ppointer is a class which wraps a raw pointer to manage the life time of a pointer
 * 1. Fundemental Job - To remove chances of memory leak
 * 2. It makes sures that obj is deleted if not referred any more
 *
 *
 * */
#include<iostream>


using namespace std;

class MyInt {
	public:
		explicit MyInt(int* p = nullptr) { ptr = p; }
		~MyInt() 
		{
			cout<<"Destructor called\n";	
			delete ptr; 
		}	

		int& operator*() { return *ptr; }

	private:
		int* ptr;
};

int *glob_var;
int main()
{
	if  (true) {
		int *get_ptr = new int(10);

		/* inti the glob var with get_ptr*/
		glob_var=get_ptr;

		MyInt obj(get_ptr);

		cout<<*obj <<endl;
	}

	/* Dangling pointer here*/	
	cout<<*glob_var<<endl;
}
