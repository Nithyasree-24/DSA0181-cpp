#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0,temp;
    cout << "Enter a number: ";
    cin >> num;
    temp=num;
    while (num != 0) {
        int digit = num % 10;      
        reversed = reversed * 10 + digit;
        num /= 10;                 
    }
    if(reversed==temp){
    	cout << "Palindrome";
	}
	else{
		cout << "not palindrome";
	}
    return 0;
}

