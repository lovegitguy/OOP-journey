#include <iostream>
using namespace std;

int main() {
    int i, n1,n2, m , index=0, arr1[10],
    arr2[10],arr3[20];

    cout<<"\n Enter the number of elements in Array 1";
    cin>>n1;

    if(n1<0||n1>10)
    {
        cout<<"Cannot proceed with this large value"<<endl;
        return 0;
    }

    cout<<"\n Enter the elements of Array 1";
    for(i=0;i<n1;i++)
    {
        cout<<"\n Enter the element for array index"<<i<<" ";
        cin>>arr1[i];
    }

    cout<<"\n Enter the number of elements in Array 2";
    cin>>n2;

     if(n2<0||n2>10)
    {
        cout<<"Cannot proceed with this large value"<<endl;
        return 0;
    }

    cout<<"\n Enter the elements of Array 2";
    for(i=0;i<n2;i++)
    {
        cout<<"\n Enter the element for array index"<<i;
        cin>>arr2[i];
    }

    m=n1+n2;
    for(i=0;i<n1;i++)
    {
        arr3[index]=arr1[i];
        index++;
    }

    for(i=0;i<n2;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    
    cout<<"\n The merged  Array is ";
    for(i=0;i<m;i++)
    {
        cout<<arr3[i]<<" "<<endl;
    }
    return 0;
}