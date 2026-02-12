#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int SUBJECTS = 5;
const int MARKS = 5;

int main()
{
    string subjectNames[SUBJECTS];
    int marks[SUBJECTS][MARKS];

    // Input subject names
    cout << "Enter 5 subject names:\n";
    for (int i = 0; i < SUBJECTS; i++)
        cin >> subjectNames[i];

    // Input marks
    for (int i = 0; i < SUBJECTS; i++)
    {
        cout << "Enter 5 marks for " << subjectNames[i] << ":\n";
        for (int j = 0; j < MARKS; j++)
            cin >> marks[i][j];
    }

    cout << "\n\n";

    // Table header
    cout << left << setw(15) << "Subject";
    for (int j = 0; j < MARKS; j++)
        cout << right << setw(6) << ("M" + to_string(j + 1));
    cout << endl;

    // Separator line
    cout << string(15 + MARKS * 6, '-') << endl;

    // Table rows
    for (int i = 0; i < SUBJECTS; i++)
    {
        cout << left << setw(15) << subjectNames[i];
        for (int j = 0; j < MARKS; j++)
            cout << right << setw(6) << marks[i][j];
        cout << endl;
    }

    return 0;
}
