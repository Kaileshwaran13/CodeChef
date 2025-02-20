#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int yearsum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            yearsum += arr[i];
        }
        int db, mb, yb, dc, mc, yc;
        cin >> yb >> mb >> db >> yc >> mc >> dc;
        int tot = 0;
        if (yc > yb) {
            tot += (yc - yb - 1) * yearsum;
        }
        int byear = yb % 4 == 0 ? yearsum + 1 : yearsum;
        int month = 0;
        for (int i = 0; i < mb - 1; i++) month += arr[i];
        int sub = db + month;
        tot += byear - sub;
        int mon = 0;
        for (int i = 0; i < mc - 1; i++) mon += arr[i];
        tot += mon + dc;
        int years = yc - yb - 1 + yb % 4;
        tot += years / 4;
        if (yc == yb) cout << mon + dc - month - db + 1 << endl;
        else
            cout << tot + 1 << endl;

    }

}
