#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, Size, count;
    string str;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> Size;
        cin >> str;
        for(int i = 0; i < Size; i++){
            if(str[i] == str[i + 1]){
                count++;
            }
        }
        cout << count << '\n';
    }
}
