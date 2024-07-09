#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string str;
    int count0, count1;
    while(t--){
        cin >> str;
        count0 = 0;
        count1 = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '0'){
                count0++;
            }else{
                count1++;
            }
        }
        if(count0 == 1 || count1 == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}
