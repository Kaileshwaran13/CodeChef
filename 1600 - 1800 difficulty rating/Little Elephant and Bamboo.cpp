#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n], x;
        long long sum = 0;
        for (int i = 0; i < n; i++) 
            cin >> A[i];
        for (int i = 0; i < n; i++) {
            cin >> x;
            A[i] = x - A[i];
            sum += A[i];
        }
        if (n == 1) {
            if (A[0] > 0) 
                cout << -1 << endl;
            else 
                cout << abs(A[0]) << endl;
        }
        else if (n == 2) {
            if (sum != 0) 
                cout << -1 << endl;
            else 
                cout << abs(A[0]) << endl;
        }
        else {
            bool flag = true;
            int s = sum / (n - 2);
            for (int i = 1; i < n; i++) {
                if (abs(A[i]) % 2 != abs(A[i - 1]) % 2) 
                    flag = false;
            }
            for (int i = 0; i < n; i++) {
                if (abs(A[i]) > s) 
                    flag = false;
            }
            if (sum < 0) 
                cout << -1 << endl;
            else if (flag && sum % (n - 2) == 0) 
                cout << sum / (n - 2) << endl;
            else 
                cout << -1 << endl;
        }
    }
    return 0;
}
