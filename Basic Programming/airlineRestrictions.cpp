#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c, d, e, sum, flag;
    while(t--){
        sum = 0;
        flag = 0;
        cin >> a >> b >> c >> d >> e;
        sum = a + b + c;
        if(a <= e && sum - a <= d){
            flag = 1;
        }else if(b <= e && sum - b <= d){
            flag = 1;
        }else if(c <= e &&  sum - c <= d){
            flag = 1;
        }else{
            flag = 0;
        }
        if(flag == 1){
            cout << "YES" << '\n';        
        }else{
            cout << "NO" << '\n';
        }
    }
}