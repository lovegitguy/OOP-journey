#include <iostream>
using namespace std;

  int const MAX=1000;
    char str[MAX];
int main() {
  

    cout<<"Enter the string:\n";
    cin.get(str,MAX,'$'); // here $ is the word that terminates the cin fu

    cout<<"You entered:"<<str;
    return 0;
}