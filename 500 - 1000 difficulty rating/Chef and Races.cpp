#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> a >> b >> c >> d;
        if(a != c && a != d){
            count++;
        }
        if(b != c && b != d){
            count++;
        }
        cout << count << '\n';
    }
    

}
