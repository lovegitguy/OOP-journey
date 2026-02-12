#include <iostream>
using namespace std;

int main() {
    int n, i;
    int large, large_pos;
    int second_large, second_pos;
    int arr[20];

    cout << "Enter number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    // Find largest
    large = arr[0];
    large_pos = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
            large_pos = i;
        }
    }

    // Find second largest
    second_large = -999999;  // very small value
    second_pos = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] != large && arr[i] > second_large) {
            second_large = arr[i];
            second_pos = i;
        }
    }

    cout << "Largest: " << large << " at position " << large_pos << endl;
    cout << "Second Largest: " << second_large << " at position " << second_pos << endl;

    return 0;
}
