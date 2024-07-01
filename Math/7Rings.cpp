#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int val = 0;
    while(t--){
        int n,x;
        cin>>n>>x;
        val = n * x;
        if(val >= 10000 && val <= 99999)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}