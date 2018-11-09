//Converting string to pointer-based strings and character arrays.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string string1("STRINGS");
	const char* ptr1 = nullptr;
	size_t length = string1.size();
	char* ptr2 = new char[length + 1]; //includeing null

	//copy characters from string1 into allocated memory
	string1.copy(ptr2, length, 0);
	ptr2[length] = '\0';

	cout << "string string1 is " << string1
	     << string1.c_str() << "\nnptr is ";

	//Assign to pointer ptr1 the const char * returned by
	//function data().NOTE: this is a potentially dangerous
	//assignment.If string1 is modified, pointer ptr1 can
	//become invalid.
	ptr1 = string1.data(); //non-null terminated char array

	//output each character using pointer
	for(size_t i = 0; i < length; ++i)
		cout << *(ptr1 + i);
	cout << "\nptr2 is " << ptr2 << endl;
	delete[] ptr2; //reclaim dynamically allocated memory
}