    #include <iostream>
    using namespace std;
    
    int main() {
        int i, n, num, pos, arr[20];
        cout<<"\n Enter the number of elements in the array";

        cin>>n;

        for(i=0;i<n;i++)
        {
            cout<<"Enter the element for"<<i<<endl;
            cin>>arr[i];
        }

        cout<<"Enter the number you want to enter \n";
        cin>>num;

        cout<<"Enter the position you want to enter the element \n";
        cin>>pos;

        for(i=n-1;i>=pos;i--)
        arr[i+1] = arr[i];
        arr[pos]=num;
        n++;

        cout<<"\n The array after the insertion of the element is";

        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

        return 0;
    }