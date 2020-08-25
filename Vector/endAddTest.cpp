#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> test(6,67);
	for(vector <char>::reverse_iterator rit= test.rbegin();rit!=test.rend();++rit)
		cout<<" "<<*rit;
	cout<<endl;
	printf("%c\n",test.begin());
	printf("%c\n",test.rend());
}
