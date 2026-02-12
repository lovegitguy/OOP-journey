//HYBRID INHERITANCE

#include <iostream>
using namespace std;

    class Student
    {
        protected:
        string name;
        int roll;
        int grade;

        public:
        Student()
        {

        }

    };

        
    class Male:public Student
    {
        public:
        void maleprnt()
        {
            cout<<"i am a male"<<endl;
        }
    };

        class Female:public Student
    {
        public:
        void femaleprnt()
        {
            cout<<"i am a female"<<endl;
        }
    };

    class Boy: public Male
    {
        public:
        void boyprnt()
        {
            cout<<"i am a boy"<<endl;
        }
    };

    
    class Girl: public Female
    {
        public:
        void girlprnt()
        {
            cout<<"i am a girl"<<endl;
        }
    };


int main() {
    Girl G1;
    G1.girlprnt();

    return 0;
}