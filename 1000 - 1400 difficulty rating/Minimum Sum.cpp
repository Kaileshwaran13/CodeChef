#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n); 
        int result = arr[0];
        for (int i = 0; i < n; i++) {
            result = gcd(result, arr[i]);
        }
        cout << result * n << '\n';
    }
}
