//Algorithms remove,remove_if,remove_copy and remove_copy_if.
#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

bool greater9(int); //prototype

int main()
{
   const size_t SIZE = 10;
   array<int, SIZE> init = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
   ostream_iterator<int> output(cout, " ");

   array<int, SIZE> a1(init); //initialize with copy of init
   cout << "a1 before removing all 10s:\n   ";
   copy(a1.cbegin(), a1.cend(), output);

   //remove all 10s from a1
   auto newLastElement = remove(a1.begin(), a1.end(), 10);
   cout << "\na1 after removing all 10s:\n    ";
   copy(a1.begin(), newLastElement, output);

   array<int, SIZE>a2(init);
   array<int, SIZE>c = {0};
   cout<<"\na1 before removing all 10s and copying:\n    ";
   copy(a2.cbegin(), a2.cend(), output);

   //copy from a2 to c, removing 10s in the process
   remove_copy(a2.cbegin(), a2.cend(), c.begin(), 10);
   cout << "\nc after removing all 10s from a2:\n   ";
   copy(c.cbegin(), c.cend(), output);

   array<int, SIZE>a3(init);
   cout << "\n\na3 before removing all elements greater than 9:\n";
   copy(a3.cbegin(), a3.cend(), output);

   //remove elements greater than 9 from a3
   newLastElement = remove_if(a3.begin(), a3.end(), greater9);
   cout << "\na3 after removing all elements greater than 9:\n   ";
   copy(a3.begin(), newLastElement, output);

   array<int, SIZE>a4(init);
   array<int, SIZE>c2 = {0};
   cout << "\n\na4 before removing all elements"
        << "\ngreater than 9 and copying:\n   ";
   copy(a4.cbegin(), a4.cend(), output);

   //copy elements from a4 to c2, removing elements greater
   //than 9 in the process
   remove_copy_if(a4.cbegin(), a4.cend(), c2.begin(), greater9);
   cout << "\nc2 after removing all elements"
        << "\ngreater than 9 from a4:\n   ";
   copy(c2.cbegin(), c2.cend(), output);
   cout << endl;
}

bool greater9(int x)
{
   return x > 9;
}