#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false; // If divisible by any number, it's not prime
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }

    return 0;
}

