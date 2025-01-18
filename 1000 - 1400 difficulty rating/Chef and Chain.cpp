#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    string str;
    while(tt--){
        cin >> str;
        string option1 = "", option2 = "";
        for(int i = 0; i < str.size(); i++){
            if( i % 2 == 0){
                option1 += '+';
                option2 += '-';
            }
            else{
                option1 += '-';
                option2 += '+';
            }
            
        }
        int count1 = 0, count2 = 0;
        for(int i = 0; i < str.size(); i++){
            if( option1[i] != str[i])
                count1++;
            if( option2[i] != str[i])
                count2++;
        }
        cout << min(count1, count2) << '\n';
    }
}
