#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 2; i <= n;i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << "The " << n << "th Fibonacci number is: " <<(n==1?a:b)<< endl;
    return 0;
}

