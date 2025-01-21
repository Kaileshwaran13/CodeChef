#include <bits/stdc++.h>

using namespace std;
long long int calculatemoves(long long int moves);
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        int ans;
        // long long int ans=calculatemoves(y);
        if (y == 0)
            ans = 1;
        else
            ans = y * 3;
        cout << ans << endl;
    }
    return 0;
}

long long int calculatemoves(long long int moves)
{
    if (moves == 0)
        return 1;
    else if (moves > 0 && moves <= 2)
        return calculatemoves(moves - 1) + moves + 1;
    else
        return calculatemoves(moves - 1) + 3;


}
