#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;  
    cin >> testCases;
    while (testCases--) {
        long long arraySize; 
        cin >> arraySize;
        vector<long long> numbers(arraySize); 
        for (long long i = 0; i < arraySize; i++) {
            cin >> numbers[i];
        }
        long long totalSubarrays = 0, currentLength = 1; 
        for (long long i = 1; i <= arraySize; i++) {
            if (i < arraySize && numbers[i] == numbers[i - 1]) {
                currentLength++;
            } else {
                totalSubarrays += (currentLength * (currentLength + 1)) / 2; 
                currentLength = 1; 
            }
        }
        cout << totalSubarrays << endl; 
    }
    return 0;
}
