#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0) {
        long long N;
        cin >> N;
        string S;
        cin >> S;
        int i, first1s = 0, sec1s;
        for (i = 0; i < N; i++) {
            if (S[i] == '1')
                first1s++;
            else
                break;
        }
        int mx = 0;
        int sum = 0;
        for (int x = i; x < N; x++) {
            sum = 0;
            while (S[x] == '1') {
                x++;
                sum++;
            }
            mx = max(mx, sum);
        }
        mx = mx + first1s;
        cout << mx << endl;
        T--;
    }
    return 0;
}
