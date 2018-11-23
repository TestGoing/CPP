#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	cout<<"输入两个字符串: "<<endl;
	cin>>str1>>str2;

	if(str1 > str2)
		cout<<"第一个大于第二个"<<endl;
	else if (str1 < str2)
		cout<<"第一个小于第二个"<<endl;
	else
		cout<<"两个字符串相等"<<endl;

	return 0;
}