//Inputting characters using cin member function getline.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int SIZE=80;
	char buffer[SIZE];

	cout<<"Enter a sentence:"<<endl;
	cin.getline(buffer,SIZE);//读取换行符并丢弃，输入缓冲区中没有换行符了
	cout<<"\nThe sentence entered is:"<<endl<<buffer<<endl;
	return 0;
}

