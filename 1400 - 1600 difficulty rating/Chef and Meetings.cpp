#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int valid(int hh, int mm, int h1, int m1, int h2, int m2) {
    if (h1 < hh && hh < h2) return 1;
    else if (h1 == hh && h2 == hh) {
        if (m1 <= mm && mm <= m2) return 1;
    }
    else if (h1 == hh) {
        if (m1 <= mm && hh < h2) return 1;
    }
    else if (h2 == hh) {
        if (h1 < hh && mm <= m2) return 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int HH = (s1[0] - '0') * 10 + (s1[1] - '0');
        int MM = (s1[3] - '0') * 10 + (s1[4] - '0');

        if (s2 == "PM" && HH != 12) HH += 12;
        if (s2 == "AM" && HH == 12) HH = 0;
        int n;
        cin >> n;
        while (n--) {
            string a, b, c, d;
            cin >> a >> b >> c >> d;
            int H1 = (a[0] - '0') * 10 + (a[1] - '0');
            int M1 = (a[3] - '0') * 10 + (a[4] - '0');
            if (b == "PM" && H1 != 12) H1 += 12;
            if (b == "AM" && H1 == 12) H1 = 0;
            int H2 = (c[0] - '0') * 10 + (c[1] - '0');
            int M2 = (c[3] - '0') * 10 + (c[4] - '0');
            if (d == "PM" && H2 != 12) H2 += 12;
            if (d == "AM" && H2 == 12) H2 = 0;

            cout << valid(HH, MM, H1, M1, H2, M2);
        }
        cout << endl;
    }
    return 0;
}
