#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, temp, rint;
    while(t--){
        cin >> n;
        temp = 0;
        rint = 0;
        while(n != 0){
            temp = n % 10;
            rint = (rint * 10) + temp;
            n /= 10;
        }
        cout << rint << '\n';
    }
}