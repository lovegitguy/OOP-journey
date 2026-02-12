#include <iostream>
using namespace std;

int main() {

    //declaration of size and array
    const int SIZE=6;
    double sales[SIZE];

    //taking input of array
    cout<<"Enter widget sales for 6 days\n";
    for(int j=0;j<SIZE;j++)
    cin>>sales[j];

    //calculation of total
    double total =0;
    for(int j=0;j<SIZE;j++)
    total+=sales[j];

    //calculation of average
    const double average =total/SIZE;
    cout<<"Average = "<<average<<endl;
    return 0;
}