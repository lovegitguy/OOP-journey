#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char str[]="Amitesh is an Coder he codes in c++""he also codes in Javascript";

    const int MAX=100;
    char str2[MAX];

    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str2[i]=str[i];
    }
    
     str2[len] = '\0';  // terminate properly
     cout<<str2<<endl;
    return 0;
}