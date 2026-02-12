#include <iostream>
using namespace std;

int main() {
    int n, i, arr[10], pos;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
    int small=arr[0]; pos=0;
    for(i=1;i<n;i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
            pos=i;
        }
    }

    cout<<"\n The smallest element is"<<small<<endl;

    cout<<"\n The position of the smallest array is"<<pos<<endl;

    return 0;
}