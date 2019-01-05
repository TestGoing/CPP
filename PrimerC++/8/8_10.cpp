//将来自文件中的行保存在vector<string>中.
//然后使用一个istringstream从vector读取数据元素,
//每次读取一个单词.
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream in("data");
	if(!in)
	{
		cerr<<"无法打开输入文件"<<endl;
		return -1;
	}

	string line;
	vector<string> words;
	while(getline(in,line))
	{
		words.push_back(line);
	}
	in.close(); //输入完毕,关闭文件

	vector<string>::const_iterator it = words.begin(); //迭代器
	while(it!= words.end())
	{
		istringstream line_str(*it);
		string word;
		while(line_str >> word)
			cout<<word<<" ";
		cout<<endl;
		++it;
	}
	return 0;
}