#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int tt, a, b;
    cin >> tt;
    while(tt--){
        cin >> a >> b;
        cout << (a/2) * (b/2) + (a - a/2) * (b - b/2) << '\n';
    }

}
