#include <iostream>
using namespace std;

int main() {
    int i=0,n,arr[20];
     cout<<"Enter the number of elements:"<<endl;
     cin>>n;

     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }

     cout<<"The array elements are \n :";
     for(i=0;i<n;i++)
     cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    return 0 ;
}