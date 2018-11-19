#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	constexpr size_t sz=5;
	int a[sz],b[sz],i;
	srand((unsigned)time(NULL));

	for(i=0; i<sz; i++)
		a[i]=rand()%10;
	cout<<"输入5个数字"<<endl;

	int uVal;
	for(i=0; i<sz; i++)
		if(cin>>uVal)
			b[i]=uVal;

	cout<<"系统生成的数据:"<<endl;
	for(auto val:a)
		cout<<val<<" ";
	cout<<endl;

	cout<<"您猜测的数据:"<<endl;
	for(auto val:b)
		cout<<val<<" ";
	cout<<endl;

	int *p=begin(a), *q=begin(b);
	while(p != end(a) & q!=end(b))
	{
		if(*p != *q)
		{
			cout<<"不对"<<endl;
			return -1;
		}
		p++;
		q++;
	}
	cout<<"全对"<<endl;
	return 0;
}