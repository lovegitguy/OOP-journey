#include <iostream>
using namespace std;

int main() {
    int i,n,temp;
    int small, small_pos;
    int large, large_pos;
    int arr[20];

    cout<<"Enter the number of elements for the array\n";
    cin>>n;

    if(n<0 || n>20)
    cout<<"Number is overflowing the size limit"<<endl;

    cout<<"Enter the elements for"<<n<<" "<< "elements \n";
    for(i=0;i<n;i++)
    cin>>arr[i];

    small=arr[0],small_pos=0;
    large=arr[0],large_pos=0;

    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            small_pos=i;
        }

        if(arr[i]>large)
        {
            large=arr[i];
            large_pos=i;
        }
    }

    cout<<"The smallest element in the array is"<<" "<<small<<"& its position is "<<" "<<small_pos<<endl;

        cout<<"The largest element in the array is"<<" "<<large<<"& its position is "<<" "<<large_pos<<endl;

    return 0;
}