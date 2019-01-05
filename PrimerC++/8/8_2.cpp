//以读模式打开一个文件,将其内容读入到一个string的vector中,将每一行作为独立的元素
//存于vector中
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream in("data"); //打开文件
	if(!in)
	{
		cerr<<"无法打开输入文件"<<endl;
		return -1;
	}

	string line;
	vector<string> words;
	while(getline(in,line)) //从文件中读取一行
	{
		words.push_back(line); //添加到vector中
	}

	in.close(); // 输入完毕,关闭文件
	vector<string>::const_iterator it=words.begin();
	while(it !=words.end()){
		cout<<*it<<endl;
		++it;
	}
}