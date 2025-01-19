#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < long long > A(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << (sum / (n - 1)) - A[i] << " ";
        }
        cout << '\n';
    }
}
