//Testing Standard Library vector class template
//element-manipulation functions.

#include <iostream>
#include <array> //array class-template definition
#include <vector> //vector class-template definition
#include <algorithm> //copy algorithm
#include <iterator> //ostream_iterator iterator
#include <stdexcept> //out_of_range exception

using namespace std;

int main()
{
   const size_t SIZE=6;
   array<int,SIZE> values = {1,2,3,4,5,6};
   vector<int> integers(values.begin(),values.end());
   ostream_iterator<int> output(cout," ");

   cout<<"Vector integers contains: ";
   copy(integers.begin(), integers.end(),output);
   cout<<"\nFirst element of integers: "<<integers.front()
       <<"\nLast element of integers: "<<integers.back();

   integers[0] = 7;
   integers.at(2) = 10;
   integers.insert(integers.begin()+1, 22);//不能通过编译
   cout<<"\n\nContent of vector integers after changes: ";
   copy(integers.begin(),integers.end(),output);

   try
   {
      integers.at(100) = 777;
   }
   catch(out_of_range & outOfRange)
   {
      cout<<"\n\nException: "<<outOfRange.what();
   }

   //erase first element
   integers.erase(integers.begin()); //不能通过编译
   cout<<"\n\nVector integers after erasing first element: ";
   copy(integers.begin(),integers.end(),output);

   //erase remaining elements
   integers.erase(integers.begin(), integers.end());
   cout<<"\nAfter erasing all elements, vector integers "
       <<(integers.empty()? "is" : "is not")<<" empty";

   //insert elements from the array values
   //integers.insert(integers.cbegin(),values.cbegin(),values.cend()); //不能通过编译
   cout<<"\n\nContents of vector integers before clear: ";
   copy(integers.begin(),integers.end(),output);
   //empty integers; clear calls erase to empty a collection

   integers.clear();
   cout<<"\nAfter clear, vector integers "<<(integers.empty() ? "is":"is not")
       <<" empty"<<endl;
}