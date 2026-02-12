//MULTILEVEL INHERITANCE

#include <iostream>
using namespace std;

class Person
{   protected:
    string name;

    public:
    void introduce()
    {
        cout<<"hello my name is"<<name<<endl;
    }
};

    class Employee:public Person
    {
        protected:
        int salary;

        public:
        void monthly_salary()
        {
            cout<<"My monthly salary is:"<<salary<<endl;
        }
    };

    class Manager:public Employee
    {
        public:
        string department;

        Manager(string name,int salary, string department)
        {
            this->name=name;
            this->salary=salary;
            this->department=department;
        };

        void work()
        {
            cout<<"I am leading the department"<<" "<<department<<endl;
        }
    };

int main() {
    Manager A1("Amitesh",440000,"Ai");
    A1.work();
    A1.introduce();
    A1.monthly_salary();
    return 0;
}