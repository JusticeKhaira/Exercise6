#include <iostream>
#include <string>
using namespace std;

int main() {
    int* intValue = new int;

    string* stringValue = new string;

    cout << "Enter an integer value: ";
    cin >> *intValue;

    cout << "Enter a string value: ";
    cin >> *stringValue;

    cout << "The value of dynamically integer is:  " << *intValue << std::endl;
    cout << "The value of dynamically String is:  " << *stringValue << std::endl;

    delete intValue;
    delete stringValue;

    return 0;
}
