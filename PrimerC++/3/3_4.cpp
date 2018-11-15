#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	cout<<"请输入您的字符串,可以包含空格: "<<endl;
	while(getline(cin,line))
		cout<<line<<endl;
	return 0;
}