#include <iostream>

using namespace std;

int main()
{
	constexpr size_t array_size=10;
	int a[array_size];
	for(int i = 0; i < array_size; i++)
		a[i] = i;

	for(auto val : a)
		cout<< val << " ";
	cout<<endl;

	return 0;
}