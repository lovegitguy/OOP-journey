#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char str[]="Amitesh is an Coder he codes in c++""he also codes in Javascript";

    const int MAX=100;
    char str2[MAX];

    strcpy(str2,str);
    cout<<str2<<endl;
    return 0;
}