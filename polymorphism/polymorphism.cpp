#include <iostream>
using namespace std;

    class Area
    {
        public :

        int area(int r)
        {
            return 3.14f*r*r;
        }

        int area(int l, int b)
        {
            return l*b;
        }

        float area(float r)
         {
            return 3.14*r*r;
        }

          float area(float l, float b)
        {
            return l*b;
        }


    };
int main() {
    Area A;
    cout << "Area of circle (int radius): " << A.area(5) << endl;
    cout << "Area of circle (float radius): " << A.area(8.1f) << endl;
    cout << "Area of rectangle (int): " << A.area(4, 5) << endl;
    cout << "Area of rectangle (float): " << A.area(4.5f, 5.5f) << endl;
    return 0;
}