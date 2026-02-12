
//HIERARCHIAL INHERITANCE

#include <iostream>
using namespace std;

 class Human
 {
    protected:
    string name;
    int age;
    int salary;

    public:
    Human(string name,int age,int salary)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
    }

    void displayhuman()
    {
         cout << name << " " << age << " " << salary;
    }
 };

    class Student:public Human
    {
        string branch;
        public:
        Student(string name,int age, string branch,int salary)
        :Human(name,age,salary)
        { 
            this-> branch=branch;
        }

        void displaystudentinfo()
        {
            cout<<name<<" "<<age<<" "<<salary<<" "<<branch<<endl;
        }
    };

    class Teacher:public Human
    {
        string department;
        public:
        Teacher(string name,int age,int salary, string department):Human(name,age,salary)
        {
        this->department=department;
        }

        void displayteacherinfo()
        {
            cout<<name<<" "<<age<<" "<<salary<<" "<<department;
        }
    };

int main() {
    Student A1("Amitesh",19,"Ai and Ml",0);
    A1.displaystudentinfo();

    Teacher A2("Amitesh",43,456621,"AI & Robotics");
    A2.displayteacherinfo();
    return 0;
}