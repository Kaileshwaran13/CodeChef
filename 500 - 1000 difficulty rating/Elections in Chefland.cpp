#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, numVal, count, numCmp, num;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> numVal >> numCmp;
        while(numVal--){
            cin >> num;
            if(num >= numCmp){
                count++;
            }
        }
        cout << count << '\n';
    }

}
