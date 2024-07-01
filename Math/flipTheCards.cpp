#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    int n, x;
    while(t--){
        cin >> n >> x;
        cout << min( n - x , x)<< '\n';
    }
}