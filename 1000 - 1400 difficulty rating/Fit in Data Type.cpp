#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b;
    cin >> tt;
    while(tt--){
        cin >> a >> b;
        cout << b % (a - 1) << '\n';
    }
}
