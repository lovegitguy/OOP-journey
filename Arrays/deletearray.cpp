#include <iostream>
using namespace std;

int main() {
    int n, i, j, num, arr[20];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are:\n";
    for (i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << "Enter the number to be deleted: ";
    cin >> num;

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;      // reduce size
            break;    // delete only first occurrence
        }
    }

    cout << "Array after deletion:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
