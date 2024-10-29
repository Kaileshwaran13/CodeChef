#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        if(n % 4 == 0)
            cout << "Good" << '\n';
        else
            cout << "Not Good" << '\n';
    }
}