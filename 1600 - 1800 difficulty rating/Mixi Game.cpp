#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (sum >= 0) 
                    sum += arr[i];
                else 
                    sum -= arr[i];
            }
            else {
                if (sum >= 0) 
                    sum -= arr[i];
                else 
                    sum += arr[i];
            }
        }
        if (abs(sum) >= k) 
            cout << "1" << endl;
        else 
            cout << "2" << endl;
    }
    return 0;
}
