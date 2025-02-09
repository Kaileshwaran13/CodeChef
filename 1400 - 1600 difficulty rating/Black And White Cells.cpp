#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        bool rev = false;
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'W') 
                rev = true;
            else {
                if (rev) count--;
                else count++;
            }
        }
        if (count == 0) 
            cout << "Chef\n";
        else 
            cout << "Aleksa\n";
    }
    return 0;
}
