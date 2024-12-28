#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[] = {22, 23, 26, 27};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    vector<int> missing;
    int expected = arr[0];

    for (int i = 0; i < n; ++i) {
        while (arr[i] > expected) missing.push_back(expected++);
        expected = arr[i] + 1;
    }

    if (!missing.empty()) {
        for (int x : missing) cout << x << " ";
    } else {
        cout << "No missing elements.";
    }
    cout << endl;

    return 0;
}

