//Algorithms iter_swap,swap swap_rangs
#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
   const size_t SIZE = 10;
   array<int, SIZE> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   ostream_iterator<int> output(cout, " ");

   cout << "Array a contains:\n ";
   copy(a.cbegin(), a.cend(), output);
   swap(a[0], a[1]);
   cout << "\nArray a after swapping a[0] and a[1] using swap:\n ";
   copy(a.cbegin(), a.cend(), output);

   //use iterators to swap elements at location 0 and 1 of array a
   iter_swap(a.begin(), a.begin() + 1);
   cout << "\nArray a after swapping a[0] and a[1] using iter_swap:\n  ";
   copy(a.cbegin(), a.cend(), output);

   //swap elements in first five elements of array a with
   //elements in last five elements of array a
   swap_ranges(a.begin(), a.begin() + 5, a.end() - 5);
   cout << "\nArray a after swapping the first five elements\n"
        << "with the last five elements:\n   ";
   copy(a.cbegin(), a.cend(), output);
   cout << endl;
}