#include <iostream>
#include <vector>

using namespace std;

int main()
{
	constexpr size_t sz=10;
	vector<int> vInt, vInt2;

	for (int i = 0; i<sz; i++)
	{
		vInt.push_back(i);
	}

	for (int j=0; j<sz; j++)
		vInt2.push_back(vInt[j]);

	for (auto val: vInt2)
		cout<<val<<" ";
	cout<<endl;

	return 0;
}