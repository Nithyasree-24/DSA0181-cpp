#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class StringCaseConverter {
    public:
        void toUpper(string str) {
            transform(str.begin(), str.end(), str.begin(), ::toupper);
            cout << "The uppercase string is: " << str;
        }
        void toLower(string str) {
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            cout << "The lowercase string is: " << str;
        }
};

int main() {
    StringCaseConverter converter;
    string input;    cout << "Enter the string: ";
    getline(cin, input);
    converter.toUpper(input);
    converter.toLower(input);
    return 0;
}

