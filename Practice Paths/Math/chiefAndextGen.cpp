#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a,b,x,y;
    while(t--){
        cin >> a >> b >> x >> y;
        if(a * b <= x * y)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}