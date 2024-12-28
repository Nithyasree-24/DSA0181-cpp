#include<iostream>
using namespace std;

int main(){
    int num, bit;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the bit to set (0-31): ";
    cin >> bit;

    if (bit >= 0 && bit <= 31) {
        num |= (1 << bit);
        cout << "Bit set successfully!\n";
        cout << "Answer: " << num << endl;
    }
    else {
        cout << "Invalid bit number! Please enter a value between 0 and 31.\n";
    }
    return 0;
}

