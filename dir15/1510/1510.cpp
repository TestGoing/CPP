//Standard Library vector class template.

#include <iostream>
#include <vector> //vector class-template definition
#include <iterator>
#include <typeinfo>

using namespace std;

//prototype for function tremplate printVector
template <typename T>  void printVector(const vector<T> & integers2);

int main()
{
   const size_t SIZE = 6; //define array size
   int values[SIZE]  = {1,2,3,4,5,6};
   vector<int> integers; //create vector of ints

   cout<<"The initial size of integers is: "<<integers.size()
       <<"\nThe initial capacity of integers is: "<<integers.capacity();

   integers.push_back(2);
   integers.push_back(3);
   integers.push_back(4);

   cout<<"\nThe size of integers is: "<<integers.size()
       <<"\nThe capacity of integers is: "<<integers.capacity();
   cout<<"\n\nOutput built-in array using pointer notation: ";

   for(const int* ptr=begin(values); ptr!=end(values); ++ptr)
      cout<<*ptr<<' ';

   cout<<"\nOutput vector using iterator notation: ";
   printVector(integers);
   cout<<"\nReversed contents of vector integers: ";

   //display vector in reverse order using const_reverse_iterator
   for(auto reverseIterator = integers.crbegin();
         reverseIterator != integers.crend(); ++reverseIterator)
   {
      cout<<*reverseIterator <<' ';
   }
   cout<<endl;

}


template <typename T> void printVector(const vector<T> & integers2)
{
   //display vector elements using const_iterator
   for(auto constIterator = integers2.cbegin();
         constIterator !=integers2.cend(); ++constIterator)
      cout<<*constIterator<<' ';
}