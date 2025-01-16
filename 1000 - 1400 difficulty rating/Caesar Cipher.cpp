#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >>tt;
    while(tt--){
        cin >> size;
        string s, t, u;
        cin >> s >> t >> u;
        int shift = t[0] - s[0];
        if(shift < 0){
            shift += 26;
        }
        for(int i = 0; i < size; i++){
            cout << char((u[i] - 'a' + shift) % 26 + 'a');    
        }
        cout <<'\n';
    }

}
