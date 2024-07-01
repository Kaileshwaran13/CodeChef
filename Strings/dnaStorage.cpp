#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' && s[i + 1] == '0'){
                cout << 'A';
            }else if(s[i] == '0' && s[i + 1] == '1'){
                cout << 'T';
            }else if(s[i] == '1' && s[i + 1] == '0'){
                cout << 'C';
            }else if (s[i] == '1' && s[i + 1] == '1'){
                cout << 'G';
            }
            i++;
        }
        cout << '\n';
        // your code goes here
    }

}
