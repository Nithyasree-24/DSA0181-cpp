#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, sum = 0;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        sum += a;
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << "\nSum of the Fibonacci series: " << sum << endl;
    return 0;
}

