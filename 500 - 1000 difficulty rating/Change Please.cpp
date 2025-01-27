#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        int change;
        if(((num / 10) * 10) < num)
            change = (100 - ((num / 10) * 10) - 10);
        else 
            change = 100 - num;
        cout << change << '\n';
    }

}
