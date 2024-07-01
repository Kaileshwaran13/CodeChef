#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s1, s2;
    for(int i = 0; i < t; i++){
        cin >> s1 >> s2;
        for(int i = 0; i < 5; i++){
            if(s1[i] == s2[i]){
                cout <<'G';
            }else{
                cout << 'B';
            }
        }
        cout << '\n';
    }
	// your code goes here

}
