#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, val;
    cin >>tt;
    while(tt--){
        val = 0;
        cin >> x >> y >> z;
        int arr[x];
        for(int i = 0; i < x; i++){
            cin >> arr[i];
            val += min(arr[i] * y, z);
        }
        cout << val << '\n';
    }

}
