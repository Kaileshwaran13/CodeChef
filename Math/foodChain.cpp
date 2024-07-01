#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int e , k, sum, level;
    while(t--){
        sum = 0;
        level = 0;
        cin >> e >> k;
        while(e != 0){
            e /= k;
            level++;
        }   
        cout << level<< '\n';
    }
}
