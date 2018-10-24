//Test virtual function
#include <iostream>

using namespace std;

class A
{
public:
   virtual void foo()
   {
      cout << "A::foo() is called" << endl;
   }
};

class B: public A
{
public:
   void foo()
   {
      cout << "B::foo() is called" << endl;
   }
};

int main(void)
{
   A* a = new B();
   a->foo(); //a 虽然是指向A的指针，但是被调用的函数 foo 却是B的
   return 0;
}
