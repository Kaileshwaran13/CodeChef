#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;
    cin >> h;
    if(h > 8)
        cout << "MORE";
    else if( h == 8)
        cout << "PERFECT";
    else
        cout << "LESS";
}