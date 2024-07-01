#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if( (100 - a) < (200 - (b * 2)) )
            cout << "FIRST" <<'\n';
        else if((100 - a) == (200 - (b * 2)))
            cout << "BOTH" << '\n';
        else
            cout << "SECOND" << '\n';
    }
}