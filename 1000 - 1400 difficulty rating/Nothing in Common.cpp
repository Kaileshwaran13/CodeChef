#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, c = 0;
        cin >> n >> m;
        long int a[n], b[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] > b[j]) 
                j++;
            else if (a[i] < b[j]) 
                i++;
            else {
                c++;
                i++;
                j++;
            }
        }
        cout << c <<'\n';
    }
}
