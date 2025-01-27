#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n;
    cin >> tt;
    while(tt--){
        cin >> n;
        int l = 0, b = 0;
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if((i * j) > (l * b) && (2 * (i+j)) <= n){
                    l = i;
                    b = j;
                }
            }
        }
        cout << l * b << '\n';
    }

}
