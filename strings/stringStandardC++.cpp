#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string s1="I am Elliot Alderson";
    string s2=" Not";
    string s3;

    s3=s1+s2;
    string s(10,'*');//repeated characters

    //checking if its empty or not

    if(s3.empty())
    {
        cout<<"Empty string:\n";
    }

    //clear a string 
    s3.clear();

    //resize a string
    s1.resize(20);

    //at,front,back
    cout<<s1[1];
    cout<<s1.front();
    //substring
    cout<<s1.substr(5,6)<<endl;

    //length
    cout<<s3.length()<<endl;

    //swap
    s1.swap(s2);

    //string back

    cout<<s1.back()<<endl;

    // cout<<s2<<"into"<<s1<<endl;
    // cout<<s3<<endl;
    return 0;
}