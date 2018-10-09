//Unformatted I/O using read, gcount and write.

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 80;
	char buffer[SIZE];
	cout << "Enter a sentence:" << endl;

	//use function read to input characters into buffer
	cin.read( buffer, 20 );

	//use functions write and gcount to display buffer characters
	cout<<endl<<"The sentence entered was:"<<endl;
	cout.write(buffer,cin.gcount());
	cout<<endl;
}