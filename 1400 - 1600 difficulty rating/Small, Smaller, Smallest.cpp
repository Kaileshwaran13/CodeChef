#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    string str;
    cin >> tt;
    while(tt--){
        cin >> size >> str;
        count = 0;
        for(int i = 0; i < size; i++){
            if(str[i] == '1')
                count++;
        }
        if(count & 1)
            cout << 1 << '\n';
        else if(count > 0)
            cout << 0 << '\n';
        else
            cout << size << '\n';
    }
}
