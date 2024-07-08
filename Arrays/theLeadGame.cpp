#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p1, p2, lead = 0, winner = 0, a = 0, b = 0;
    while(n--){
        cin >> p1 >> p2;
        a += p1;
        b += p2;
        if(lead < abs(a - b)){
            lead = abs(a - b); 
            if(p1 > p2){
                winner = 1;
            }else{
                winner = 2;
            }
        }
    }
    cout << winner << " " << lead;
}
