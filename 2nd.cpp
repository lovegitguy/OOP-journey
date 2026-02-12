#include<iostream>
using namespace std;

class customer{
        string name;
        int balance;
        int code;

        public:
        //defualt constructor
        customer()
        {
            cout<<"i created a constructor"<<endl;
        }
        
        //parameterized constructor
        customer(string a, int b , int c)
        {
            name=a;
            balance=b;
            code=c;
            
        }

        //using the same name every time and different parameters is called constructor overloading
        customer(string a, int b)
        {
            this->name=a;
            this->balance=b;
            this->code=4562;
        }

        //inline constructor NOTE : write inline before inline constructor

        // inline customer(string a, int b , int c):name(a),balance(b),code(c)
        // {

        // }

        //deconstructor
        ~customer()
        {

        }
        void display(){
            cout<<name<<" "<<balance<<" "<<code<<endl;
        }
};

int main()
{
    customer A1;
    customer A2("Amitesh",2001,536698);
    customer A3("Amit",3422);
    customer A4("Amitesh",45003,220);
    A1.display();
    A2.display();
    A3.display();
    A4.display();
}
