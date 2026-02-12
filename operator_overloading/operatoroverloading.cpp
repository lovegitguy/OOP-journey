#include <iostream>
using namespace std;

class Complex
{
    int real , img;

    public:

    Complex()
    {

    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }

    Complex operator +(Complex  &A3)
    {
        Complex ans;
        ans.real = real+A3.real;
        ans.img = img + A3.img;
        return ans;

    }
};
int main() {
    Complex A(3,4);
    Complex A2(4,5);
    A.display();
    A2.display();

    Complex A3=A+A2;
    A3.display();

     return 0;
}