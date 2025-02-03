#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> col(6);
        for (int i = 0; i < 6; i++) {
            cin >> col[i];
        }
        bool found = false;
        if (col[0] == col[2] && col[2] == col[4]) 
            found = true;
        if (col[0] == col[3] && col[3] == col[4]) 
            found = true;
        if (col[0] == col[2] && col[2] == col[5]) 
            found = true;
        if (col[0] == col[3] && col[3] == col[5]) 
            found = true;
        if (col[1] == col[2] && col[2] == col[4]) 
            found = true;
        if (col[1] == col[3] && col[3] == col[4]) 
            found = true;
        if (col[1] == col[2] && col[2] == col[5]) 
            found = true;
        if (col[1] == col[3] && col[3] == col[5]) 
            found = true;
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
