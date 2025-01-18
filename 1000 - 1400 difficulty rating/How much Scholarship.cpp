#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    if( num <= 50){
        cout << 100 << '\n';
    }
    else if( num <= 100){
        cout << 50 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}
