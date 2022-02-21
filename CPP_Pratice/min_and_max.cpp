#include<iostream>
#include<vector>
#include<algorithm>

/* algorithm, vector, iostream */
using namespace std;
int main()
{
	vector<int> vc1 = {5,1,0,8,10};
	
	int k=3;
	unsigned int dummy = 0xFFFFFFFF;

	dummy = ~(dummy<<k);

	for (int i=0;i<vc1.size();i++)
	{
		vc1[i] = vc1[i] & dummy;
	}

	for (auto val:vc1)
	{
		cout<<val <<" ";
	}
	cout<<endl;

	int max {0}, min {0};

	max = *max_element(vc1.begin(), vc1.end());
	min = *min_element(vc1.begin(), vc1.end());

	cout<< "max: " <<max <<endl;
	cout<< "min: " <<min <<endl;
	cout<< "Total: " <<max+min <<endl;
}
