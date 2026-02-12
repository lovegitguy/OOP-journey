// #include <iostream>
// using namespace std;

// int main() {
//     const int MAX=10;
//     char str[MAX];

//     cout<<"Enter the string of text:\n";
//     cin.get(str,MAX);
//     cout<<"You Entered : \n"<<str<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    // string name,message;

    // cout<<"\n Enter the name";
    // getline(cin,name);
    // cout<<"\n Enter the message";
    // getline(cin, message);

    // cout<<name+" "+message<<endl;
    string info="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

    // int y=info.find("dummy");
    // cout<<y<<endl;
    cout<<info.length()<<endl;
    cout<<info.size()<<endl;

    info.resize(10);
    cout<<info<<endl;
    return 0;
}