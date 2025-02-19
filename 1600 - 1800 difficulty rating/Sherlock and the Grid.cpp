#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long grid[n][n], bot[n][n], right[n][n];
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < n; j++) {
                char x;
                cin >> x;
                if (x == '#') 
                    grid[i][j] = 0;
                else 
                    grid[i][j] = 1;
            }
        }
        for (long long i = 0; i < n; i++) 
            bot[n - 1][i] = grid[n - 1][i];
        for (long long i = n - 2; i >= 0; i--) {
            for (long long j = 0; j < n; j++) {
                bot[i][j] = (bot[i + 1][j] & grid[i][j]);
            }
        }
        for (long long i = 0; i < n; i++) 
            right[i][n - 1] = grid[i][n - 1];
        for (long long i = 0; i < n; i++) {
            for (long long j = n - 2; j >= 0; j--) {
                right[i][j] = (right[i][j + 1] & grid[i][j]);
            }
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < n; j++) {
                if (bot[i][j] & right[i][j]) 
                    ans++;
            }
        }
        cout << ans << endl;
    }
}
