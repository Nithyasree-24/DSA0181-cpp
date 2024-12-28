#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = 0.5 * base * height;
    cout << "Area of the triangle: " << triangleArea << endl;

    return 0;
}

