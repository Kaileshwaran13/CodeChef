#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, a, b;
    while(t--){
        cin >> x >> a >> b;
        if( ( (a * 1) + (b * 2) ) >= x)
            cout << "Qualify" << '\n';
        else
            cout << "NotQualify" << '\n';
    }
}