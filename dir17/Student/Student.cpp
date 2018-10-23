#include <iostream>

using namespace std;

class Student
{
public:
   Student(int n)
   {
      num = n;
   }

   ~Student() {}

protected:
   int num;
};

class Student1: public Student
{
public:
   Student1(int n, int m): Student(n)
   {
      age = m;
   }
   ~Student1() {}

   void display()
   {
      cout << "num=" << num << endl;
      cout << "age=" << age << endl;
   }
private:
   int age;
};

int main()
{
   Student1 stu1(23, 12);
   stu1.display();
   return 0;
}


