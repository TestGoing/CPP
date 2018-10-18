//Standard Library multitest class template
#include <array>
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	const size_t SIZE = 10;
	array<int,SIZE> a = {7,21,8,1,18,30,100,22,85,13};
	multiset<int,less<int>> intMultiset; //multiset of ints
	ostream_iterator<int> output(cout," ");

	cout<<"There are currently "<<intMultiset.count(15)
	    <<" values of 15 in the multiset\n";

	intMultiset.insert(15); //insert 15 in intMultiset
	intMultiset.insert(15); //insert 15 in intMultiset
	cout<<"After inserts, there are "<<intMultiset.count(15)
	    <<" values of 15 in the multiset\n\n";

	//findf 15 in intMultiset; find returns iterator
	auto result = intMultiset.find(15);

	if(result != intMultiset.end()) //if iterator not at end
		cout<<"Found value 15\n"; //found search value 15

	//find 20 in intMultiset; find returns iterator
	result=intMultiset.find(20);

	if(result == intMultiset.end())
		cout<<"Did not find value 20\n";

	//insert elements of array a into intMultiset
	intMultiset.insert(a.cbegin(),a.cend());
	cout<<"\nAfter insert, intMultiset contains:\n";
	copy(intMultiset.begin(),intMultiset.end(),output);

	//determine lower and upper bound of 22 in intMultiset
	cout<<"\n\nLower bound of 22: "
	    <<*(intMultiset.lower_bound(22));
	cout<<"\nUpper bound of 22: "<<*(intMultiset.upper_bound(22));

	//use equal_range to determine lower and upper bound of 22 in intMultiset
	auto p = intMultiset.equal_range(22);

	cout<<"\n\nequal_range of 22:"<<"\nLower bound: "
	    <<*(p.first)<<"\nUpper bound: "<<*(p.second);
	cout <<endl;
}