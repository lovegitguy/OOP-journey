#include <iostream>
#include<iomanip>
using namespace std;

  int const MAX=10;
    char arr[MAX];
int main() {
  

    cout<<"Enter the string:\n";
    cin>>setw(MAX)>>arr;

    cout<<"You entered:"<<arr;
    return 0;
}