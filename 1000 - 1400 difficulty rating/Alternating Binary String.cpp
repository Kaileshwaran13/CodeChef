#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    cin >> tt;
    string str;
    while(tt--){
        cin >> size >> str;
        count = 0;
        for(int i = 0; i < size; i++){
            if(str[0] == '0' && str[i] != str[i +1])
                count++;
            if(str[0] == '1' && str[i] != str[i +1])
                count++;
        }
        cout << size - count <<'\n';
    }

}
