#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b;
    cin >> tt;
    while(tt--){
        cin >> a>> b;
        a = abs(a-b);
        cout << min(a,b) << '\n';
    }

}
