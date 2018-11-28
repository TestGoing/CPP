#include <iostream>
#include <string>

using namespace std;

int main()
{
	string finalgrade;
	int grade;
	cout<<"输入成绩："<<endl;
	while(cin>>grade&&grade >=0&&grade<=100)
	{
		if(grade > 90)
			finalgrade="high pass";
		else if(grade > 75)
			finalgrade="pass";
		else if(grade>60)
			finalgrade="low pass";
		else
			finalgrade="fail";
		cout<<"所处档次："<<finalgrade<<endl;

		cout<<"输入成绩："<<endl;
	}

	return 0;
}