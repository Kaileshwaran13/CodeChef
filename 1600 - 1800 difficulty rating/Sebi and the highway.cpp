#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        double S, SG, FG, D, T;
        cin >> S >> SG >> FG >> D >> T;
        double othcarsp = (D * 5 * 36) / T;
        othcarsp += S;
        if (abs(othcarsp - SG) < abs(othcarsp - FG)) 
            cout << "SEBI\n";
        else if (abs(othcarsp - SG) > abs(othcarsp - FG)) 
            cout << "FATHER\n";
        else 
            cout << "DRAW\n";
    }
}
