#include <bits/stdc++.h>
using namespace std;

int minimum(char * a, int start, int end) {
    int min = start;
    for (int i = start + 1; i <= end; i++)
        if (a[i] < a[min])
            min = i;
    return min;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, p;
        string s;
        char d;
        cin >> s;
        cin >> d;
        i = 0;
        char a[20];
        while (s[i] != '\0')
            a[i++] = s[i];
        a[i] = d;
        int start = 0, end = i;
        n = i;
        for (i = 0; i < n; i++) {
            p = minimum(a, start, end);
            if (p < n)
                start = p + 1;
            else
                start = p;
            cout << a[p];
        }
        cout << endl;
    }
    return 0;
}
