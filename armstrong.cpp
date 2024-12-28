#include <iostream>
using namespace std;

int main() {
    int num, sum= 0,temp;
    cout << "Enter a number: ";
    cin >> num;
    temp=num;
    while (num != 0) {
        int digit = num % 10;      
        sum+=digit*digit*digit;
        num /= 10;                 
    }
    if(sum==temp){
    	cout << "armstrong";
	}
	else{
		cout << "not an armstrong";
	}
    return 0;
}

