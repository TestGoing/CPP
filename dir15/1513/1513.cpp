#include <iostream>
#include <array>
#include <list> //list class-template definition
#include <algorithm> //copy algorithm
#include <iterator> //ostream_iterator

using namespace std;

template <typename T> void printList(const list<T> &listRef);

int main()
{
   const size_t SIZE=4;
   array<int,SIZE> ints = {2,4,6,8};
   list<int> values; //craete list of ints
   list<int> otherValues; //create list of ints

   values.push_front(1);
   values.push_front(2);
   values.push_back(4);
   values.push_back(3);

   cout<<"values contains: ";
   printList(values);

   values.sort(); //sort values
   cout<<"\nvalues after sorting contains: ";
   printList(values);

   //insert elements of ints into otherValues
   otherValues.insert(otherValues.begin(), ints.cbegin(),ints.cend());
   cout<<"\nAfter insert, otherValues contains: ";
   printList(otherValues);

   //remove otherValues elements and insert at end of values
   values.splice(values.end(),otherValues);
   cout<<"\nAfter splice, values contains: ";
   printList(values);

   values.sort();
   cout<<"\nAfter sort, values contains: ";
   printList(values);

   //insert elements of ints into otherValues
   otherValues.insert(otherValues.begin(),ints.begin(),ints.end());
   otherValues.sort();
   cout<<"\nAffter insert and sort,otherValues contains: ";
   printList(otherValues);

   //remove otherValues elements and insert into values in sorted order
   values.merge(otherValues);
   cout<<"\nAfter merge:\n values contains: ";
   printList(values);
   cout<<"\n   otherValues contains: ";
   printList(otherValues);

   values.pop_front(); //remove element from front
   values.pop_back(); //remove element from back
   cout<<"\nAfter pop_front and pop_back:\n values contains: ";
   printList(values);

   values.unique(); //remove duplicate elements
   cout<<"\nAfter unique, values contains: ";
   printList(values);

   //swap elements of values and otherValues
   values.swap(otherValues);
   cout<<"\nAfter swap:\n   values contains: ";
   printList(values);
   cout<<"\n   otherValues contains: ";
   printList(otherValues);

   //replace contents of values with elements of otherValues
   values.assign(otherValues.cbegin(),otherValues.cend());
   cout<<"\nAfter assign, values contains: ";
   printList(values);

   //remove otherValues elements and insert into values in sorted order
   values.merge(otherValues);
   cout<<"\nAfter merge, values contains: ";
   printList(values);

   values.remove(4);
   cout<<"\nAfter remove(4), values contains: ";
   printList(values);
   cout<<endl;

   return 0;
}

template <typename T> void printList(const list <T> &listRef)
{
   if (listRef.empty())
      cout<<"List is empty";
   else
   {
      ostream_iterator<T> output(cout, " ");
      copy(listRef.cbegin(),listRef.cend(),output);
   }
}