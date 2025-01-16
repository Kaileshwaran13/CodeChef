#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    string str, str1;
    while(tt--){
        set<string> uniqueCountryCode;
        cin >>str;
        for( int i = 0; i < str.size() - 1; i++){
         str1 = str.substr(i, 2);
         uniqueCountryCode.insert(str1);
        }
        cout <<uniqueCountryCode.size() <<'\n';
    }
}
