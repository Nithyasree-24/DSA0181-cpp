#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {0,1,2,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int expected = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] != expected) {
            cout << "The smallest missing element: " << expected << endl;
            return 0;
        }
        expected++;
    }
    cout << "The smallest missing element: " << expected << endl;
    return 0;
}

