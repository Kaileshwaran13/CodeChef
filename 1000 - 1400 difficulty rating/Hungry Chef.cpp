#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, normalBurger, premiumBurger, needs, amount;
    cin >> tt;
    int normalCount , premiumCount, val = 0;
    while(tt--){
        premiumCount = 0;
        normalCount = 0;
        cin >> normalBurger >> premiumBurger >> needs >> amount;
        if(normalBurger * needs > amount){
            cout << -1 << '\n';
        }
        else{
            premiumCount = needs;
            val = needs * premiumBurger;
            while(val > amount){
                premiumCount--;
                val -= premiumBurger;
                val += normalBurger;
                normalCount++;
            }
            cout << normalCount << ' ' << premiumCount << '\n';
        }
    }

}
