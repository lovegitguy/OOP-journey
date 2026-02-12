#include <iostream>
#include<cstring>
using namespace std;

class Objectpart
{
    private:
    char partName[30];
    int modelNumber;
    int price;

    public:

    void setpartname(const char part[], int mod, int pr)
    {
        strcpy(partName,part);
        modelNumber=mod;
        price=pr;
    };

    void showpart()
    {
        cout <<partName<<endl;
        cout<<modelNumber<<endl;
        cout<<price<<endl;
    }


};
int main() {
    Objectpart part1;
    part1.setpartname("Screw",44561,100000);
    part1.showpart();
    return 0;
}