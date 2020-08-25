#include<iostream>
#include<vector>
using namespace std;
//template<class T>
void display(vector<int> &arr)
{
	cout<<"Reverse Dir:\n";
	for(vector<int>::reverse_iterator it = arr.rbegin();it!=arr.rend();it++)
	{
		cout<<" "<<*it;
	printf("%p\n",it);
	}
	cout<<endl;
//to find the location of reversed vector to that of 
//noramal vector res:it is not giving new location 
	vector<int>::reverse_iterator radd = arr.rbegin();
	printf("%p\n",radd);
	radd = arr.rend();
	printf("%p\n",radd);
	
	cout<<"Normal Dir:\n";
	for(vector<int>::iterator it = arr.begin();it!=arr.end();it++)
	{
		cout<<" "<<*it;
		printf("%p\n",it);
	}
	cout<<endl;
	
	vector<int>::iterator add = arr.begin();
	printf("%p\n",add);
	add = arr.end();
	printf("%p\n",add);
}
int main()
{
	vector<int> arr(5);
	for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
		*it =rand()%100;
	display(arr);
}
/*
Reverse Dir:
 930x7fffd3a5b140
 150x7fffd3a5b140
 770x7fffd3a5b140
 860x7fffd3a5b140
 830x7fffd3a5b140

0x7fffd3a5b140
0x7fffd3a5b140
Normal Dir:
 83 86 77 15 93
0x7fffcbee9e70
0x7fffcbee9e84
*/
