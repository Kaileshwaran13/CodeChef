#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    string str;
    cin >>tt;
    while(tt--){
        cin >>str;
        int sum = 0;
        sort(str.begin(), str.end());
        for(int i = 0; i < str.size(); i++){
            sum += ( (i + 1) * ( str[i] - 96 ) );
        }
        cout << sum << '\n';
        
    }

}
