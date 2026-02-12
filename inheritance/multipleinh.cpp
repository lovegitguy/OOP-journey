//MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

    class Engineer
    {
        public:
        string specialization;

        void work()
        {
            cout<<"I have specialization in"<<specialization<<endl;

        }
    };

    class Youtuber
    {
        public:
        int subscribers;

        void contentcreator()
        {
            cout<<"i have subs base of "<<subscribers<<endl;
        }
    };

    class Codeteacher:public Engineer,public Youtuber
    {
        public:
        string name;
        Codeteacher(string name,string specialization,int subscribers)
        {
            this->specialization=specialization;
            this->subscribers=subscribers;
            this->name=name;
        }

        void display()
        {
            cout<<"My name is" <<name<<endl;
            work();
            contentcreator();
        }
    };
int main() {
    
    Codeteacher A1("Amitesh","Ai",390089);
    A1.display();
    return 0;
}