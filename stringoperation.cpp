#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

int findlength(char str[]) {
    int length = 0;
    int i = 0;
    while (str[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

void concatestring(char str1[], char str2[]) {
    char result[MAX * 2];
    int i = 0, j = 0;

    // Copy str1 to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append str2 to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0'; 
    cout << result << endl;
}

int main() {
    char str[MAX];
    char str1[MAX];
    char str2[MAX];
    int choice;

    do {
        cout << "\nEnter the Correct choice:\n";
        cout << "1: Find Length of String\n";
        cout << "2: Concatenate The String\n";
        cout << "3: Exit\n";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                cout << "Enter the First String:\n";
                cin.getline(str, MAX);
                cout << "Length of string: " << findlength(str) << endl;
                break;

            case 2:
                cout << "Enter the First String:\n";
                cin.getline(str1, MAX);
                cout << "Enter the Second String:\n";
                cin.getline(str2, MAX);
                cout << "Concatenation of String is:\n";
                concatestring(str1, str2);
                break;

            case 3:
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
