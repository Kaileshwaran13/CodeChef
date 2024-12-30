#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x * 100 < y * 10){
            cout << "Disposable" << '\n';
        }
        else{
            cout << "Cloth" << '\n';
        }
    }
}
