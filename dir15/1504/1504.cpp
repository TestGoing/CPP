//Demostrating input and output with iterators.
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
   cout<<"Enter two integers: ";

   //create istream_iterator for reading int values from cin
   istream_iterator<int> inputInt(cin);

   int number1 = * inputInt; //read int from standard input
   ++inputInt; //move iterator to next input value
   int number2 = * inputInt; //read int from standard input

   //create ostream_iterator for writing int values to cout
   ostream_iterator<int> outputInt(cout);
   cout<<"The sum is: ";
   *outputInt = number1 + number2;
   cout<<endl;
}