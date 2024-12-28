#include <iostream>
using namespace std;

int main() {
    int num, sum= 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;      
        sum=sum+ digit;
        num /= 10;                 
    }
		cout << "Sum:"<<sum<<endl;
    return 0;
}

