//Algorithms fill, fill_n, generate and generate_n
#include <iostream>
#include <algorithm> //algorithm definitions
#include <array>
#include <iterator> //ostream_iterator

using namespace std;

char nextLetter(); //prototype of generator function

int main()
{
   array<char, 10> chars;
   ostream_iterator<char> output(cout, " ");
   fill(chars.begin(), chars.end(), '5');
   cout << "chars after filling with 5s:\n";
   copy(chars.cbegin(), chars.cend(), output);

   //fill first five elements of chars with As
   fill_n(chars.begin(), 5, 'A');
   cout << "\n\nchars after filling five elements with As:\n";
   copy(chars.cbegin(), chars.cend(), output);

   //generator values for all elements of char with nextLetter
   generate(chars.begin(), chars.end(), nextLetter);
   cout << "\n\nchars after generating letters A-J:\n";
   copy(chars.cbegin(), chars.cend(), output);

   //generator values for first five elements of chars with nextLetter
   generate_n(chars.begin(), 5, nextLetter);
   cout << "\n\nchars after generating K-O for the"
        << " first five elements:\n";
   copy(chars.cbegin(), chars.cend(), output);
   cout << endl;

}

char nextLetter()
{
   static char letter = 'A';
   return letter++;
}