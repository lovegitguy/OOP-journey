//PUBLIC PRIVATE PROTECTED

#include <iostream>
using namespace std;
class Human
{
    // private:
    // int a;
    // protected:
    // int b;
    // public:
    // int c;
    public:
   string name;
   int age,weight;

    // void fun()
    // {
    //     a=10;
    //     b=20;
    //     c=30;
    // }
};

class Student:public Human
{
    int roll_number,fees;
};
int main()
{
  Student A;
  A.name="amit";

}

  







