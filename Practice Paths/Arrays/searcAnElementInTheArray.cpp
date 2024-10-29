#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, searchInt;
    cin >> t >> searchInt;
    for(int i = 0; i < t; i++){
        int x;
        cin >> x;
        if(x == searchInt ){
            cout << "YES" << '\n';
            break;
        }else{
            if(i == t - 1)
                cout << "NO" << '\n';
        }
    }
}