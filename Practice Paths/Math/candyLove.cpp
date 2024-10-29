#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    int sum;
    while(t--){
        cin >> n;
        int a[n] = {0};
        sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 != 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
