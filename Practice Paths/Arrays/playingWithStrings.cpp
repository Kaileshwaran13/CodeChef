#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;
    int n;
    string s, r;
    int count0, count1;
    while(t--){
        count0 = 0;
        count1 = 0;
        cin >> n;
        cin >> s >> r;
        for(int i = 0; i < n; i++){
            if(s[i] != r[i] && s[i] == '0'){
                count0++;
            }else if(s[i] != r[i] && s[i] == '1'){
                count1++;
            }
        }
        if(count0  == count1){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
}
