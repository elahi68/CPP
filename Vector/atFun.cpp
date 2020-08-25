#include<iostream>
#include<vector>
using namespace std;
int main()
{
	float f;
	vector <float> fv(2);
	for(auto i=0;i<2;i++)
	{
		cin>>f;
		fv.at(i)=f;
	}
	for(auto it=fv.rbegin();it!=fv.rend();it++)
	{
		cout<<" "<<*it;
	}
	cout<<endl;
}
