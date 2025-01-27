#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        x += y;
        if(x % 2 != 0 ){
            cout << "Jay" << '\n';
        }
        else{
            cout << "Janmansh" << '\n';
        }
    }

}
