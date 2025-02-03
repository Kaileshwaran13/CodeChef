#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n;
        cin >> n;
        long long int sum = 0;
        sum = (n / 9) * 45;
        int rem = n % 9;
        sum += (rem + 1) * rem / 2;
        cout << sum << endl;
    }

}
