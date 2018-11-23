#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

int main()
{
	constexpr size_t sz=5;
	int i;
	vector<int>a,b;
	srand((unsigned)time (NULL));
	for(i=0; i<sz; i++)
		a.push_back(rand()%10);
	cout<<"输入数字"<<endl;

	int uVal;
	for(i=0; i<sz; i++)
		if(cin>>uVal)
			b.push_back(uVal);
	cout<<"系统生成的数据是: "<<endl;
	for(auto val:b)
		cout<<val<<" ";
	cout<<endl;

	auto it1=a.cbegin(),it2 = b.cbegin();
	while(it1 != a.cend() && it2 != b.cend())
	{
		if(*t1 != *t2)
		{
			cout<<"错误"<<endl;
			return -1;
		}
		it1++;
		it2++;
	}
	cout<<"恭喜您全都猜对了!"<<endl;

	return 0;
}