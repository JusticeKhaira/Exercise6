#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    do {
        cout << "Enter not more than 3 rows : ";
        cin >> rows;
        if (rows > 3) {
            cout << "Rows cannot exceed 3. Please try again.\n";
        }
    } while (rows > 3);

    do {
        cout << "Enter not more than 3 Columns: ";
        cin >> columns;
        if (columns > 3) {
            cout << "Columns cannot exceed 3. Please try again.\n";
        }
    } while (columns > 3);


    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[columns];
    }

    cout << "Enter values for the array (" << rows * columns << " in total):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Values of each element of the array are :\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
