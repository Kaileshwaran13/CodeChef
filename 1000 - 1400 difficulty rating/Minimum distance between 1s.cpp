#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        string S;
        cin >> S;
        int evenPlace = 0, oddPlace = 0;
        for(int i = 0; i < N; i++) {
            if(S[i] == '1') {
                if(i % 2 == 0) {
                    evenPlace = 1;
                } else {
                    oddPlace = 1;
                }
            }
        }
        
        cout << (3 - evenPlace - oddPlace) << '\n';
    }
    
}
