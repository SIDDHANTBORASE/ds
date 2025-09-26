#include <iostream>
using namespace std;

int main() {
    int marks[100][10];
    int average[100];
    int total[100];
    int highest;
    int lowest;
    int topper;
    int m, n;

    cout << "Enter the Number of the Students: ";
    cin >> n;
    cout << "Enter the Number of Subjects: ";
    cin >> m;

    for (int i = 0; i < n; i++) {
        cout << "Enter Marks of Student " << i + 1 << ":\n";
        for (int j = 0; j < m; j++) {
            cout << "Enter Marks of Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    int choices;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate the total and Average of the Students\n";
        cout << "2. Find the Highest and Lowest total marks among the Students\n";
        cout << "3. Find Topper of the Class\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choices;

        switch (choices) {
            case 1:
                for (int i = 0; i < n; i++) {
                    total[i] = 0;
                    for (int j = 0; j < m; j++) {
                        total[i] += marks[i][j];
                    }
                    average[i] = total[i] / m;
                    cout << "Total of Student " << i + 1 << ": " << total[i] << endl;
                    cout << "Average of Student " << i + 1 << ": " << average[i] << endl;
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No students data available.\n";
                    break;
                }
                highest = total[0];
                lowest = total[0];
                for (int i = 1; i < n; i++) {
                    if (total[i] > highest) {
                        highest = total[i];
                    }
                    if (total[i] < lowest) {
                        lowest = total[i];
                    }
                }
                cout << "Highest Total Marks Among the Students: " << highest << endl;
                cout << "Lowest Total Marks Among the Students: " << lowest << endl;
                break;

            case 3:
                if (n == 0) {
                    cout << "No students data available.\n";
                    break;
                }
                topper = 0;
                for (int i = 1; i < n; i++) {
                    if (total[i] > total[topper]) {
                        topper = i;
                    }
                }
                cout << "Topper of the Class is Student " << topper + 1 << " with total marks: " << total[topper] << endl;
                break;

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Please Enter a Valid Choice.\n";
        }

    } while (choices != 4);

    return 0;
}
