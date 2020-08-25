#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <char,7> ch = {65,66,67,68,69,70,71};
	ch.fill(100);
	for(auto it=ch.begin();it!=ch.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
