#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int cnt = 1;
        for (int i = n; i <= 298; i++)
        {
            int x = m + (20 * cnt) + (i + 1);
            if (x > 1000)
            {
                break;
            }
            cnt++;
        }
        cout << cnt - 1 << '\n';

    }


}
