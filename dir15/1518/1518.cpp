//Standard Library class map class template.
#include <iostream>
#include <map>
using namespace std;

int main()
{
   map<int,double,less<int>> pairs;

   //insert eight value_type objects in pairs
   pairs.insert({15,2.7});
   pairs.insert({30,111.11});
   pairs.insert({5,1010.1});
   pairs.insert({10,22.22});
   pairs.insert({25,33.333});
   pairs.insert(make_pair(5,77.54));
   pairs.insert(make_pair(20,9.345));
   pairs.insert(make_pair(15,99.3));

   cout<<"pairs contains:\nKey\tValue\n";
   for(auto mapItem:pairs)
      cout<<mapItem.first<<'\t'<<mapItem.second<<'\n';

   pairs[25]=9999.99;
   pairs[40]=8765.43;

   cout<<"\nAfter subscript operations,pairs contains:\nKey\tValue\n";
   for(auto mapItem:pairs)
      cout<<mapItem.first<<'\t'<<mapItem.second<<'\n';
   cout<<endl;
}