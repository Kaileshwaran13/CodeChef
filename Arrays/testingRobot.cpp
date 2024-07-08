#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x, min, max, count;
    while(t--){
        cin >> n >> x;
        count = 1;
        min = x;
        max = x;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                x++;
                if(x > max){
                    max = x;
                    count++;
                }
            }else{
                x--;
                if(x < min){
                    min = x;
                    count++;
                }
            }
        }
        cout << count << '\n';
    }
}
