#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c;
    while(t--){
        cin >> a >> b >> c;
        if(a <= b && (a >= c || c <= b))
            cout << "Yes" <<'\n';
        else
            cout << "No" << '\n';
    }
}