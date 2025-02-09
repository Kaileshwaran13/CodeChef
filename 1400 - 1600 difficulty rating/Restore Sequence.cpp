#include <bits/stdc++.h>
using namespace std;

int main() {
    vector < int > prime;
    int N = 4000000;
    vector < bool > isPrime(N, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            for (long long j = (long long) i * i; j < N; j = j + i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--> 0) {
        int N;
        cin >> N;

        vector < int > ans;

        for (int i = 0; i < N; i++) {
            ans.push_back(prime[i]);
        }

        for (int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            cout << ans[temp - 1] << " ";
        }
        cout << endl;
    }
}
