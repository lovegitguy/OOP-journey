#include <iostream>
using namespace std;

int main() {
    
    int i,arr[20],pos=0,n,num,baseAddress;
    int pos = -1;

    cout<<"\n Enter the number of elements in Array 1";
    cin>>n;

    if(n<=0||n>20)
    {
        cout<<"Cannot proceed with this large value"<<endl;
        return 0;
    }

    cout<<"\n Enter the elements of Array 1";
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter the element for array index"<<i<<" ";
        cin>>arr[i];
    }
    
    cout<<"\n Enter the element you wish to find the address of";
    cin>>num;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "\nElement not found in the array";
        return 0;
    }


    cout<<"Enter the Base Address of the array"<<endl;
    cin>>baseAddress;

    int arrayAddress = baseAddress + pos * sizeof(int);


    cout<<"\n The array address of"<<" "<<num<<"is"<<arrayAddress;
    return 0;
}