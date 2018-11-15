#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, line;
	cout << "请选择读取字符串的方式：1表示逐词读取，2 表示整行读取" << endl;
	char ch;
	cin >> ch;
	if(ch == '1')
	{
		cout << "请输入字符串:    Welcome to C++ family!   " << endl;
		cin >> word;
		cout << "系统读取的有效字符串时: " << endl;
		cout << word << endl;
		return 0;
	}
	cin.clear();
	//cin.sync();//在g++下不起作用
	cin.ignore(10,'\n');
	if(ch == '2')
	{
		//cin.get();
		cout << "请输入字符串:   Welcome to C++ family!   "<<endl;
		getline(cin, line);
		cout << "系统读取的有效字符串是: " << endl;
		cout << line << endl;
		return 0;
	}
	cout << "您输入的有误!";

	return -1;
}