#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> ref(5);
	ref.push_back(1);
	ref.push_back(1);
	ref.push_back(1);
	ref.push_back(1);
	ref.push_back(1);
	ref.push_back(1);
	cout<<"Size of 10 elements: "<<ref.size()<<endl;
	cout<<"capacity of 10 elements: "<<ref.capacity()<<endl;
}
/*Size of empty vector object: 0
//Size of 10 integer elements: 10
Size of 10 elements: 100
capacity of 10 elements: 100
Max Size: 4611686018427387903
size of class: 24
capacity is doubled for every increased in size
6 * 2 = 12
12 * 2 = 24;
24 * 2 = 48;
48 * 2 = 96;
*/
