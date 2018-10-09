//Contrasting input of a string via cin and cin.get
#include <iostream>
using namespace std;

int main( int argc, char const * argv[] )
{
	//create two char arrays,each with 80 elements
	const int SIZE = 80;
	char buffer1[SIZE];
	char buffer2[SIZE];

	char testchar='a';

	//use cin to input characters into buffer1
	cout << "Enter a sentence:" << endl;
	cin >> buffer1;

	//display buffer1 contents
	cout << "\nThe string read with cin was:" << endl
	     << buffer1 << endl << endl;

	//use cin.get to input character into buffer2
	cin.get( buffer2, SIZE ); //不读取换行符，换行符还在输入缓冲区中
	//display buffer2 contents
	cout << "The string read with cin.get was:" << endl
	     << buffer2;
	cout.put(testchar);
	cin.get(testchar);
	cout.put(testchar);     
	return 0;
}