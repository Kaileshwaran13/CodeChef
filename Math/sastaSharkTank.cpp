#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b;
    while(t--){
        cin >>a >> b;
        a = a * 10;
        b = b * 5;
        if(a == b)
            cout << "ANY" << '\n';
        else if(a > b)
            cout << "FIRST" << '\n';
        else
            cout << "SECOND" << '\n';
    }

}