
//MULTIPATH INHERITANCE

#include <iostream>
#include<string>
using namespace std;

    class Human
    {
        public:
        string name;
         int age;

         Human()
         {

         }
        
    };

    class Engineer:virtual public Human
    {   
        public:
        string specialization;
        int salary;
        string department;

        Engineer(string specialization,int salary,string department)
        {
            this->specialization=specialization;
            this->salary=salary;
            this->department=department;
        }
        void displayengineerinfo()
        {
            cout<<"I am an engineer"<<endl;
             cout<<"my specializtion is "<<" "<<specialization<<endl;
            cout<<"my salary is"<<" "<<salary<<endl;
            cout<<"my department is"<<" "<<department<<endl;
        }
    };

    
    class Youtuber:virtual public Human
    {   
        public:
        string channelname;
        int subs;

        Youtuber(string channelname,int subs)
        {
            this->channelname=channelname;
            this->subs=subs;
        }
        void displayyoutuberinfo()
        {
            cout<<"I am an youtuber"<<endl;
             cout<<"my channel name is "<<" "<<channelname<<endl;
            cout<<"my number of subs are"<<" "<<subs<<endl;
        }
    };

    class Codeteacher:public Engineer,public Youtuber
    {
        public:
        string language;

        Codeteacher(string name, int age,
                string specialization, int salary, string department,
                string channelname, int subs,
                string language)

                 : Human(),   // default is fine here
          Engineer(specialization, salary, department),
          Youtuber(channelname, subs)
        {
            this->language=language;
        }

        void displayme()
        {
            cout<<"My name is"<<" "<<name<<endl;
            cout<<"my age is"<<" " <<age<<endl;
            cout<<"my specializtion is "<<" "<<specialization<<endl;
            cout<<"my salary is"<<" "<<salary<<endl;
            cout<<"my department is"<<" "<<department<<endl;
            cout<<"my channel name is "<<" "<<channelname<<endl;
            cout<<"my number of subs are"<<" "<<subs<<endl;
            cout<<"my coding language is"<<" "<<language<<endl;
        }
    };

int main() {
    Codeteacher A1("Amitesh",19,"Ai and Robotics",1000000,
        "Ai","Codemania",200,"python");

       cout<<string(10,'*')<<" "<<endl;
        A1.displayengineerinfo();
       cout<<string(10,'*')<<" "<<endl;
        A1.displayyoutuberinfo();
       cout<<string(10,'*')<<" "<<endl;
        A1.displayme();
    return 0;
}