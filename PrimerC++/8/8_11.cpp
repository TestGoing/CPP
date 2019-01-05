#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo{
	string name;
	vector<string>phones;
};

int main()
{
	string line,word;
	vector<PersonInfo> people;
	istringstream record;

	while (getline(cin,line))
	{
		PersonInfo info;
		record.clear(); //重复使用字符串流时,每次都要调用clear
		record.str(line);
		record>>info.name;
		while(record>>word)
			info.phones.push_back(word);
		people.push_back(info); //将记录追加到people末尾
	}
	
	return 0;
}