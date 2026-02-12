#include<iostream>
#include<string>
using namespace std;
class student 
{   
    string name;
    int roll;
    int grades;

    public:
    void setname(string n){
        name=n;
        cout<<name<<endl;
    }

    void getname(){
        cout<<name<<endl;
    }
};

int main(){
    student s1;
    // s1.name="Rohan";
    // s1.roll=89;
    // s1.grades=8.5;
    s1.setname("rohan");
    s1.getname();
};

