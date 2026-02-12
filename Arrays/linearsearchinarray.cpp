#include <iostream>
using namespace std;

int main() {
    int i,arr[20],pos=0,n,num,found=0;

   
    cout<<"\n Enter the number of elements in Array 1";
    cin>>n;

    if(n<0||n>20)
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

    cout<<"Enter the number you want to search in the array"<<endl;
    cin>>num;

    for(i=0;i<n;i++)
    {
            if(arr[i]==num)
        {
            found=1;
            pos=i;
            cout<<"The required array"<<num<<" is found in:"
            <<i<<"position"<<endl;
        }
    }
   if(found==0)
        {
            cout<<"\n The required array"<<num<<" is not found in the whole array.";
        }

    return 0;
}