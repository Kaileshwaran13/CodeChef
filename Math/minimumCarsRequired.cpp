#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, sum;
    while(t--){
        sum = 0;
        cin >> n;
        sum += n / 4;
        if(n % 4 != 0)
            sum++;
        cout <<  sum << '\n'; 
    }
}