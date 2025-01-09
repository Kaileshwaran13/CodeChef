#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        set<int> range;
        cin >> a >> b >> c >> d;
        for(int i = a; i <= b; i++){
            range.insert(i);
        }
        for(int i = c; i <= d; i++){
            range.insert(i);
        }
        cout <<range.size() << '\n';

    }

}
