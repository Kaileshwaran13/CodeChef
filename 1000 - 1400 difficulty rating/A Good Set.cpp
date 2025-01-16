#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >>tt;
    while(tt--){
        cin >> size;
        for(int i = 1; i < 2 *size; i+=2){
            cout << i << ' ';
        }
        cout <<'\n';
    }
}
