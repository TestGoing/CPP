//Standard Library search and sort algorithms
#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

bool greater10(int value);

int main()
{
   const size_t SIZE = 10;
   array<int, SIZE> a = {10, 2, 17, 5, 16, 8, 13, 11, 20, 7};
   ostream_iterator<int> output(cout, " ");
   cout << "array a contains: ";
   copy(a.cbegin(), a.cend(), output);

   auto location = find(a.cbegin(), a.cend(), 16);
   if(location != a.cend())
      cout << "\n\nFound 16 at location " << (location - a.cbegin());
   else
      cout << "\n\n16 not found";

   //locate first occurrence of 100 in a
   location = find(a.cbegin(), a.cend(), 100);
   if(location != a.cend())
      cout << "\nFound 100 at location " << (location - a.cbegin());
   else
      cout << "\n100 not found";

   //locate first occurrece of value greater than 10 in a
   location = find_if(a.cbegin(), a.cend(), greater10);

   if(location != a.cend())
      cout << "\n\nThe first value greater than 10 is " << *location
           << "\nfound at location " << (location - a.cbegin());
   else
      cout << "\n\nNo values greater than 10 were found";

   //sort elements of a
   sort(a.begin(), a.end());
   cout << "\n\narray a after sort: ";
   copy(a.cbegin(), a.cend(), output);
   //use binary_search to locate 13 in a
   if(binary_search(a.cbegin(), a.cend(), 13))
      cout << "\n\n13 was found in a";
   else
      cout << "\n\n13 was not found in a";

   //use binary_search to locate 100 in a
   if(binary_search(a.cbegin(), a.cend(), 100))
      cout << "\n100 was found in a";
   else
      cout << "\n100 was not found in a";

   //determine whether all the elementes of a are greater than 10
   if(all_of(a.cbegin(), a.cend(), greater10))
      cout << "\n\nAll the elements in a are not greater than 10";
   else
      cout << "\n\nSome elements in a are not greater than 10";

   //determine whether any of the elements of a are greater than 10
   if(any_of(a.cbegin(), a.cend(), greater10))
      cout << "\n\nSome of the elements in a are greater than 10";
   else
      cout << "\n\nNone of the elements in a are greater than 10";

   //determine whether none of the elements of a are greater than 10
   if(none_of(a.cbegin(), a.cend(), greater10))
      cout << "\n\nNone of the elements in a are greater than 10";
   else
      cout << "\n\nSome of the elements in a are greater than 10";

   //locate first occurrence of value that's not greater than 10 in a
   location = find_if_not(a.cbegin(), a.cend(), greater10);
   if(location != a.cend())
      cout << "\n\nThe first value not greater than 10 is " << *location
           << "\nfound at location " << (location - a.cbegin());
   else
      cout << "\n\nOnly values greater than 10 were found";

   cout << endl;

}

bool greater10(int value)
{
   return value > 10;
}