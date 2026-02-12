#include <iostream>
using namespace std;

int main() {
     int arr[10], i, n, j, flag=0;

     cout<<"\n Enter the number of element in the array";
     cin>>n;

     cout<<"\n Enter the elements in the array";

     for(i=0;i<n;i++)
     {
        cout<<"\n Enter the element for array :"<<" "<< i;
        cin>>arr[i];
     }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j] && i!=j)
                    {
                        flag=1;
                        cout<<"\n The duplicate element is found at location:"<<i<<j;
                    }
                }
        }
  

     if(flag==0)
     cout<<"\n No duplicate elements found";
    return 0;
}