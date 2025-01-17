#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float n, x;
        cin >> n >> x;
        int a = ceil(n / 2);
        if (x > a)
            cout << "-1" << '\n';
        else
        {
            string arr(n, 'a');
            for (int i = 0; i < x; i++)
            {
                char a = ('a' + i);
                arr[i] = a;
                arr[n - 1 - i] = a;
            }
            for (int i = x; i < n - x; i++)
                arr[i] = 'a';
            cout << arr << '\n';
        }
    }
}
