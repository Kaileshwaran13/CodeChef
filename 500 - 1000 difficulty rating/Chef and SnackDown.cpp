#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        if(num == 2010 || num == 2015 || num == 2016 || num == 2017 || num == 2019)
            cout << "HOSTED" << '\n';
        else
            cout << "NOT HOSTED" << '\n';
    }

}
