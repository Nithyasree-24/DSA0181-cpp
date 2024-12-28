#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxFreq = 0, mostFrequent;

    for (int i = 0; i < n; ++i) {
        int freq = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            mostFrequent = arr[i];
        }
    }

    cout << "Most frequent element: " << mostFrequent << endl;
    return 0;
}

